#include "test.h"
#include <math.h>

CacheManager::CacheManager(Memory *memory, Cache *cache){
    // TODO: implement your constructor here
    // TODO: set tag_bits accord to your design.
    // Hint: you can access cache size by cache->get_size();
    // Hint: you need to call cache->set_block_size();
    this->memory = memory;
    this->cache = cache;
    size = cache->get_size();
    cache->set_block_size(4); // 4 bytes
    tag_bits = 32 - log2(cache->get_len()) - 2;
    last_block = 0;
    // Initialize the LRU list and positions
    lru_list.clear();
    lru_positions.clear();
};

CacheManager::~CacheManager(){

};

unsigned int CacheManager::fully_associative(unsigned int addr){
    // map addr by directed-map method
    // unsigned int index_bit = int(log2(cache->get_len()));
    // unsigned int index = (addr >> 2) % cache->get_len(); 
    unsigned int tag = addr >> 2; 
    return tag;
}

unsigned int* CacheManager::find(unsigned int addr){
    // TODO:: implement function determined addr is in cache or not
    // if addr is in cache, return target pointer, otherwise return nullptr.
    // you shouldn't access memory in this function.
    auto tag = fully_associative(addr);
    // iterate over a fully associative cache to find tag
    printf("find, last_block = %d\n", last_block);
    for(unsigned int i = 0; i < last_block + 1; i++){
        if((*cache)[i].tag == tag){
            // Move this block to the front of the LRU list
            lru_list.erase(lru_positions[i]);
            lru_list.push_front(i);
            lru_positions[i] = lru_list.begin();
            return &((*cache)[i][0]);
        }
    }
    return nullptr;
}

unsigned int CacheManager::read(unsigned int addr){
    // TODO:: implement replacement policy and return value 
    unsigned int* value_ptr = find(addr);
    if(value_ptr != nullptr){
        printf("read, last_block = %d\n", last_block);
        return *value_ptr;
    }
    else{
        printf("read miss, last_block = %d\n", last_block);
        // not in cache
        auto tag = fully_associative(addr);
        // replacement policy: FIFO
        // find the first empty block
        if(last_block < cache->get_len() - 1){
            last_block++;
            (*cache)[last_block].tag = tag;
            return (*cache)[last_block][0] = memory->read(addr);
        }
        else{ // cache is full
            // replace the first block
            unsigned int lru_block = lru_list.back();
            lru_list.pop_back();
            (*cache)[lru_block].tag = tag;
            lru_list.push_front(lru_block);
            lru_positions[lru_block] = lru_list.begin();
            return (*cache)[lru_block][0] = memory->read(addr);
            //(*cache)[0].tag = tag;
            //return (*cache)[0][0] = memory->read(addr);
        }
    }
};

void CacheManager::write(unsigned int addr, unsigned value){
    // TODO:: write value to addr
    auto tag = fully_associative(addr);
    bool found = false;
    // iterate over a fully associative cache to find tag
    for(unsigned int i = 0; i < last_block + 1; i++){
        if((*cache)[i].tag == tag){
            printf("write, last_block = %d\n", last_block);
            found = true;
            (*cache)[i][0] = value;
            // Move this block to the front of the LRU list
            lru_list.erase(lru_positions[i]);
            lru_list.push_front(i);
            lru_positions[i] = lru_list.begin();
            break;
        }
    }
    if(!found) printf("write miss, last_block = %d\n", last_block);
    memory->write(addr, value);
};

#include "../headers/structs.h"

int bit_cnt(ll size){
    ll a = 0x32;
    for(int i=1;i<=sizeof(ll)*8;i++){
        if ((bool) ((a >> (sizeof(ll)*8-i))&0x1)){
            return sizeof(ll)*8-i;
        }
    }

    return 0;
}

cad* cad_init(params pa){
    cad* ret;
    int max_idx = bit_cnt(pa.cap*1024/(pa.bl_size*pa.asso));
    ret->maxidx = max_idx;
    ret->data = (row*) malloc(sizeof(row)*max_idx);
    for(int i=0;i<max_idx;i++){
        ret->data[i].data = (block*) malloc(sizeof(block*)*pa.asso);
        for(int j=0;j<max_idx;j++){
            ret->data[i].data[j].valid = false;
            ret->data[i].data[j].bl_size = pa.bl_size;
        }
    }
    return ret;
}
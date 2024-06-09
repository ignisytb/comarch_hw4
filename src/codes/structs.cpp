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
    cad* ret = new cad;
    int max_idx = pa.cap*1024/(pa.bl_size*pa.asso);
    ret->maxidx = max_idx;
    ret->data = new row*[max_idx];
    for(int i=0;i<max_idx;i++){
        ret->data[i] = new row;
    }

    ret->bl_size = pa.bl_size;
    for(int i=0;i<max_idx;i++){
        ret->data[i]->data = new block*[pa.asso];
        for(int j=0;j<pa.asso;j++){
            ret->data[i]->data[j] = new block;
        }
        for(int j=0;j<pa.asso;j++){
            ret->data[i]->data[j]->valid = false;
        }
    }
    return ret;
}

void cad_dest(cad* ca) {
    for(int i=0;i<ca->maxidx;i++){
        free(ca->data[i]->data);
    }
    free(ca->data);
}
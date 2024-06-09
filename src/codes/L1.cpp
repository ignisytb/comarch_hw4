#include "../headers/L1.h"

L1::L1(int Cap, int Asso, int Bl_size){
    this->parameter.cap = Cap;
    this->parameter.asso = Asso;
    this->parameter.bl_size = Bl_size;

    this->data = cad_init(this->parameter);
}

bool L1::Fetch(ll address){
    ll tmp = (address >> bit_cnt(this->parameter.bl_size)) & ~(0xFFFFFFFFFFFFFFFF << (64-this->parameter.bl_size));
    ll tag = ((tmp >> bit_cnt(this->data->maxidx)) & ~(0xFFFFFFFFFFFFFFFF << (64 - this->parameter.bl_size - bit_cnt(this->data->maxidx))));
    int idx = (tmp & ~(0xFFFFFFFFFFFFFFFF << bit_cnt(this->data->maxidx)));

    row* r = this->data->data[idx];
    if (r->data[0]->valid && (r->data[0]->tag == tag)) {
        return true;
    }
    return false;
}

bool L1::Write(ll address){
    ll tmp = (address >> bit_cnt(this->parameter.bl_size)) & ~(0xFFFFFFFFFFFFFFFF << (64-this->parameter.bl_size));
    ll tag = ((tmp >> bit_cnt(this->data->maxidx)) & ~(0xFFFFFFFFFFFFFFFF << (64 - this->parameter.bl_size - bit_cnt(this->data->maxidx))));
    int idx = (tmp & ~(0xFFFFFFFFFFFFFFFF << bit_cnt(this->data->maxidx)));

    row* r = this->data->data[idx];
    
    r->data[0]->addr = address;
    r->data[0]->tag = tag;
    r->data[0]->valid = true;

    return true;
}
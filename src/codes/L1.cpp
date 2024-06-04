#include "../headers/L1.h"

L1::L1(L2* upcache){
    params upparams = upcache->cab();
    this->parameter.cap = upparams.cap/4;
    if (upparams.asso <= 2) {
        this->parameter.asso = upparams.asso;
    } else {
        this->parameter.asso = upparams.asso/4;
    }
    this->parameter.asso = upparams.asso/4;
    this->parameter.bl_size = upparams.bl_size;

    this->data = cad_init(this->parameter);
}

bool L1::Fetch(ll address){
    
}
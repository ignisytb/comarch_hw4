#ifndef L1_H
#define L1_H

#include "../headers/L2.h"

class L1 {
private:
    params parameter;
    cad* data;
public:
    L1(L2* upcache);
    ~L1(){}
    params cab(){
        return this->parameter;
    }
    cad* caa(){
        return this->data;
    }
    bool Fetch(ll address);
};

#endif
#ifndef L1_H
#define L1_H

#include "../headers/L2.h"

class L1 {
private:
    params parameter;
    cad* data;
public:
    L1(int Cap, int Asso, int Bl_size);
    ~L1(){}
    params cap(){
        return this->parameter;
    }
    cad* cac(){
        return this->data;
    }
    bool Fetch(ll address);
};

#endif
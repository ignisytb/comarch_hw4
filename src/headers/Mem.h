#ifndef Mem_H
#define Mem_H

#include <iostream>
#include "../headers/L1.h"

class Mem{
private:
    L1* c1;
    L2* c2;
public:
    Mem(int Cap, int Asso, int Bl_size);
    ~Mem(){}
    void Mem_Write(ll address);
    cad* caa1(){return this->c1->caa();}
    cad* caa2(){return this->c2->caa();}
    params cab1(){return this->c1->cab();}
    params cab2(){return this->c2->cab();}
};

#endif
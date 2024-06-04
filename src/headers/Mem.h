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
    cad* cac1(){return this->c1->cac();}
    cad* cac2(){return this->c2->cac();}
    params cap1(){return this->c1->cap();}
    params cap2(){return this->c2->cap();}
};

#endif
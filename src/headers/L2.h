#ifndef L2_H
#define L2_H

#include "../headers/structs.h"

class L2 {
private:
    params parameter;
    cad* data;
public:
    L2(int Cap, int Asso, int Bl_size);
    ~L2(){}
    params cap(){
        return this->parameter;
    }
    cad* cac(){
        return this->data;
    }
};

#endif
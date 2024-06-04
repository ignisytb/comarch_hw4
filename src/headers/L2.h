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
    params cab(){
        return this->parameter;
    }
    cad* caa(){
        return this->data;
    }
};

#endif
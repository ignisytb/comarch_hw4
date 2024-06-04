#include "../headers/L1.h"

L1::L1(int Cap, int Asso, int Bl_size){
    this->parameter.cap = Cap;
    this->parameter.asso = Asso;
    this->parameter.bl_size = Bl_size;

    this->data = cad_init(this->parameter);
}

bool L1::Fetch(ll address){
    
}
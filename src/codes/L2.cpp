#include "../headers/L2.h"

L2::L2(int Cap, int Asso, int Bl_size){
    this->parameter.cap = Cap;
    this->parameter.asso = Asso;
    this->parameter.bl_size = Bl_size;

    this->data = cad_init(this->parameter);
}
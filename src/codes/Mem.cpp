#include "../headers/Mem.h"

Mem::Mem(int Cap, int Asso, int Bl_size) {
    L2 c2(Cap, Asso, Bl_size);
    L1 c1(&c2);
    this->c2 = &c2;
    this->c1 = &c1;
}

void Mem::Mem_Write(ll address){

}
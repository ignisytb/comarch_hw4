#include "../headers/Mem.h"

Mem::Mem(int Cap, int Asso, int Bl_size) {
    L2* c2 = new L2(Cap, Asso, Bl_size);
    
    Cap = Cap/4;
    if (Asso > 2) {
        Asso = Asso/4;
    }
    L1* c1 = new L1(Cap, Asso, Bl_size);

    this->c2 = c2;
    this->c1 = c1;
}

bool Mem::Mem_Write(ll address){
    if (this->c1->Fetch(address)){
        return true;
    }
}
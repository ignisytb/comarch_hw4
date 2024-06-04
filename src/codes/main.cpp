#include "../headers/Mem.h"

#define ll long long
using namespace std;

int main() {
    Mem mem(4,4,32);
    
    mem.Mem_Write(0x1);

    mem.~Mem();
    return 0;
}
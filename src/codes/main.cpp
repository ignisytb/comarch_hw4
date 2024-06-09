#include "../headers/Mem.h"

#define ll long long
using namespace std;

int main() {
    Mem mem(4,4,32);
    
    cout << mem.Mem_Read(0b00111100100011101101001000100000) << endl;
    cout << mem.Mem_Write(0b00111100100011101101001000100000) << endl;
    cout << mem.Mem_Read(0b00111100100011101101001000100000) << endl;

    mem.~Mem();
    return 0;
}
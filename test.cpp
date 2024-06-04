#include <iostream>

#define ll long long
using namespace std;

int main() {
    ll a = 0x32;
    for(int i=1;i<=sizeof(ll)*8;i++){
        if ((bool) ((a >> (sizeof(ll)*8-i))&0x1)){
            return sizeof(ll)*8-i;
        }
    }

    return 0;
}
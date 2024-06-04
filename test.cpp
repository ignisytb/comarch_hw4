#include <iostream>
#include <bitset>

#define ll long long
using namespace std;

int main() {
    ll a = 0xFFFFFFFFFFFFFFFF << 5;
    cout << bitset<64>(~a) << endl;

    return 0;
}
#include <iostream>

#ifndef structs
#define structs

#define ll long long
using namespace std;

struct block {
    bool valid;
    int bl_size;
    ll tag;
    ll addr;
};

struct row {
    block* data;
};

struct cad {
    int maxidx;
    row* data;
};

struct params {
    short cap;
    char asso;
    char bl_size;
};

int bit_cnt(ll size);
cad* cad_init(params pa);

#endif
#include <iostream>
#include <math.h>
#include <bitset>

#ifndef structs
#define structs

#define ll long long
using namespace std;

struct block {
    bool valid;
    ll tag;
    ll addr;
};

struct row {
    block** data;
};

struct cad {
    int maxidx;
    char bl_size;
    row** data;
};

struct params {
    short cap;
    char asso;
    char bl_size;
};

int bit_cnt(ll size);
cad* cad_init(params pa);
void cad_dest(cad* ca);

#endif
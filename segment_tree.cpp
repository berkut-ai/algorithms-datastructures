#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxN = 1e5 + 5;
long stree[4 * maxN + 5]; 
vector<int> a; 

void build(int v, int tl, int tr){
    if (tl == tr){ 
        stree[v] = a[tl];
        return;
    }
    int tm = (tl+tr)/2; 
    build(2*v, tl, tm); 
    build(2*v+1, tm + 1, tr); 
    stree[v] = stree[2*v]+stree[2*v+1]; 
}

void update(int v, int tl, int tr, int pos, int val){
    if (tl == tr){
        stree[v] = val;
        return;
    }
    int tm = (tl+tr)/2;
    if (pos <= tm)
        update(2*v, tl, tm, pos, val);
    else
        update(2*v+1, tm+1, tr, pos, val);
    stree[v] = stree[2*v] + stree[2*v+1];
}

long long get(int v, int tl, int tr, int l, int r){
    if (tl == l && tr == r){
        return stree[v];
    }
    int tm = (tl+tr)/2;
    if (r <= tm){
        return get(2*v, tl, tm, l, r);
    } else if (l > tm){
        return get(2*v+1, tm+1, tr, l, r);
    } else {
        return get(2*v, tl, tm, l, tm) +get(2*v+1, tm+1, tr, tm+1, r);
    }
}

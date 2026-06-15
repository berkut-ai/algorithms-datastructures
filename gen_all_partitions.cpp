#include <iostream>
#include <vector>

using namespace std;

void PrintVec(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void gen(int n, vector<int>& p, int start) {
    if (n == 0) {
        PrintVec(p);
        return;
    }
    for (int i = 1; i <= n && i <= start; i++) {
        p.push_back(i);
        gen(n-i, p, i);
        p.pop_back();
    }
}

void genAll(int n) {
    vector<int> p;
    gen(n, p, n);
}

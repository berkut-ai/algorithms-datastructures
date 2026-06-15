#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> nextpartition(vector<int> v) {
    int n = v.size();
    v[n - 1]--;
    v[n - 2]++;
    if (v[n - 2] > v[n - 1]) {
        v[n - 2] += v[n - 1];
        v.pop_back();
        return v;
    }
    while (v[n - 2] * 2 <= v[n - 1]) {
        v.push_back(v[n - 1] - v[n - 2]);
        n++;
        v[n - 2] = v[n - 3];
    }
    return v;
}

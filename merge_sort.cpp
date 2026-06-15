#include <iostream>
using namespace std;

long long sp[100000], vs[100000];

void merge(long long l, long long s, long long r){
    long long i, j;
    i = l;
    j = s+1;
    for (int k = l; k <= r; k++){
        if (i <= s && j <= r){
            if (sp[i] < sp[j]){
                vs[k] = sp[i];
                i++;
            } else {
                vs[k] = sp[j];
                j++;
            }
        } else {
            if (i > s){
                vs[k] = sp[j];
                j++;
            } else {
                vs[k] = sp[i];
                i++;
            }
        }
    }
    for (int k = l; k <= r; k++) sp[k] = vs[k];
}

void mergesort(long long l, long long r){
    if (l < r){
        int mid;
        mid = (l+r)/2;
        mergesort(l, mid);
        mergesort(mid+1, r);
        merge(l, mid, r);
    }
}

int main(){
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> sp[i];
        vs[i] = 0;
    }
    mergesort(0, n-1);
    for (int i = 0; i < n; i++) cout << sp[i] << " ";
}

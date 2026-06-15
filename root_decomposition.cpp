//Корневая декомбинация
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

template<typename T>
using vec = vector<T>;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vec<int> a(n, 0);
    int block = sqrt(n);
    vec<int> b(n / block + 5, 0);
    
    while (q--) {
        char c;
        cin >> c;
        if (c == 'add') {
            int pos, x;
            cin >> pos >> x;
            pos--;
            int block_id = pos / block;
            b[block_id] -= a[pos];
            b[block_id] += x;
            a[pos] = x;
        } else {
            int l, r;
            cin >> l >> r;
            --l, --r;
            int sum = 0;
            int lid = l / block;
            int rid = r / block;
            if (lid == rid) {
                for (int i = l; i <= r; i++) {
                    sum += a[i];
                }
            } else {
                for (int i = l; i < (lid + 1) * block; i++) {
                    sum += a[i];
                }
                for (int i = lid + 1; i < rid; i++) {
                    sum += b[i];
                }
                for (int i = rid * block; i <= r; i++) {
                    sum += a[i];
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}

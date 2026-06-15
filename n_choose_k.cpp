
void printvec(vector<int> v){
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}
void gen(int n, int k) {
    vector<int> comb(k);
    vector<bool> bitmask(n, false);
    fill(bitmask.begin(), bitmask.begin() + k, true);
    do {
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (bitmask[i]) {
                comb[index++] = i + 1;
            }
        }
        printvec(comb);
    } while (prev_permutation(bitmask.begin(), bitmask.end()));
}

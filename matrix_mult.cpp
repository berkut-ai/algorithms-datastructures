typedef long long ll; 
typedef vector<vector<ll>> Matrix;

Matrix MultMatrix(Matrix A, Matrix B, ll mod) {
    Matrix C;
    size_t n = A.size();
    size_t m = A[0].size();
    size_t k = B[0].size();
    C.resize(n);
    for (size_t i = 0; i < n; i++)
        C[i].resize(k);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++) {
            C[i][j] = 0;
            for (int t = 0; t < m; t++)
                C[i][j] = (C[i][j] + A[i][t] * B[t][j]) % mod;
        }
    return C;
}

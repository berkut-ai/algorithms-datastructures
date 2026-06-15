vector<bool> seive (int n){
    vector<bool> p(n+1, 1); 
    p[0] = false;
    p[1] = false;
    for (int d = 2; d * 1LL * d <= n; d++){
        if (p[d]){
            for (int k = d; k <= n/d; k++)
                p[d*k] = false;
        }
    }
    return p;
}

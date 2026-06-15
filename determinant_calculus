#include"bits/stdc++.h"

using namespace std;

#define int long long
#define endl "\n"
#define mat vector<vector<int>>

int det(mat m){
    int n = m.size();
    if (n == 1)
        return m[0][0];
    if (n == 2)
        return m[0][0]*m[1][1]-m[0][1]*m[1][0];

    int d = 0;
    for (int k = 0; k < n; k++){
        mat rm(n-1, vector<int>(n, 0));
        for (int i = 1; i < n; i++){
            for (int j = 0, col = 0; j < n; j++)
                if (k != j)
                    rm[i-1][col++] = m[i][j];
        }
        int sign = 1;
        if (k%2) sign = -1;
        d += sign*m[0][k]*det(rm);
        
    }
    return d;
}

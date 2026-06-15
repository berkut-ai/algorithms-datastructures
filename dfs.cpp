//DFS (по списку смежности)
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

const int maxn = 100003;
vector<vector<int>> g(maxn, vector<int>());
int used[maxn];
int n;
int c = 0;

void dfs(int v){
    used[v] = true;
    for (auto i : g[v])
        if (!used[i])
            dfs(i);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m;
    cin >> n >> m; // vertexes, edges
    for (int i = 0; i < n; i++){
        used[i] = false;
    }
    while (m--){
        //read edges
    }
}

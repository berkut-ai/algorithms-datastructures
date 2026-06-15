#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

typedef long long ll;
using namespace std;

#define inf 1e9
#define pii pair<int, int>

int n, m;
const int maxn = 100;
vector<pii> g[maxn];
int d[maxn], way[maxn];

void Dijkstra(int v){
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    for (int i = 0; i < n; ++i){
        d[i] = inf;
    }
    d[v] = 0;
    way[v] = -1;
    pq.push({0, v});
    while (!pq.empty()){
        int w = pq.top().second;
        pq.pop();
        for (int i = 0; i < g[w].size(); i++){
            int u = g[w][i].first;
            if (d[u] > d[w]+g[w][i].second){
                d[u] = d[w]+g[w][i].second;
                pq.push({d[u], u});
                way[u] = w;
            }
        }
    }
}

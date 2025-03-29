#include <bits/stdc++.h>

typedef long long ll;

#define task "bestway"
#define endl '\n'

using namespace std;

ll n, m, s, t;
vector <vector<ll>> grid;
vector <ll> dis;
queue <ll> q;

void readData() {
    //freopen(task".INP", "r", stdin);
    //freopen(task".OUT", "w", stdout);
    cin >> n >> m >> s >> t;
    ll u, v;
    grid.resize(n + 1);
    dis.resize(n + 1, -1);
    for (ll i = 0; i < m; i++){
        cin >> u >> v;
        grid[u].push_back(v);
        grid[v].push_back(u);
    }
}

void Solve() {
    dis[s] = 0;
    q.push(s);
    while (!q.empty()){
        ll u = q.front();   
        q.pop();
        for (auto v : grid[u]){
            if (dis[v] == -1){
                dis[v] = dis[u] + 1;
                q.push(v);
            }
            if (v == t){
                cout << dis[t];
                return;
            }
        }
    }
    cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    readData();
    Solve();
    
    return 0;
}
#include <bits/stdc++.h>

typedef long long ll;

#define task "g_dfspath"
#define endl '\n'

using namespace std;

ll n, m, s, t;
vector <vector<ll>> vec;
vector <bool> visited;
vector <ll> path;
vector <ll> result;
bool found = false;

void readData() {
    //freopen(task".INP", "r", stdin);
    //freopen(task".OUT", "w", stdout);
    ll u, v;
    cin >> n >> m >> s >> t;
    visited.resize(n+1, false);
    vec.resize(n+1);
    result.resize(n+1, -1);
    for (ll i = 0; i < m; i++){
        cin >> u >> v;
        vec[u].push_back(v);
    }
}

void dfs(ll u){
    visited[u] = true;
    if (u == t || found){
        found = true;
        return;
    }
    for (auto v : vec[u]){
        if (!visited[v]){
            result[v] = u;
            dfs(v);
        }
    }
}

void Solve() {
    for (ll i = 0; i < n; i++){
        sort(vec[i].begin(), vec[i].end());
    }
    dfs(s);
    for (ll x = t; x != s; x = result[x]){
        path.push_back(x);
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    for (auto i : path){
        cout << i << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    readData();
    Solve();
    
    return 0;
}
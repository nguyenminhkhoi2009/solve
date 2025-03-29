#include <bits/stdc++.h>

typedef long long ll;

#define task "g_connect"
#define endl '\n'

using namespace std;

ll n, m;
vector <vector<ll>> grid;
vector <bool> visited;
vector <vector<ll>> results;

void readData() {
    //freopen(task".INP", "r", stdin);
    //freopen(task".OUT", "w", stdout);
    cin >> n >> m;
    ll u, v;
    grid.resize(n+1);
    visited.assign(n+1, false);
    for (ll i = 0; i < m; i++){
        cin >> u >> v;
        grid[u].push_back(v);
        grid[v].push_back(u);
    }
}

void bfs(ll start) {
    queue<ll> q;
    vector<ll> result;
    q.push(start);
    visited[start] = true;
    result.push_back(start);
    while (!q.empty()) {
        ll u = q.front();
        q.pop();
        for (auto v : grid[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                result.push_back(v);
            }
        }
    }
    results.push_back(result);
}

void Solve() {
    for (ll i = 1; i <= n; i++){
        sort(grid[i].begin(), grid[i].end());
    }
    for (ll i = 1; i <= n; i++){
        if (!visited[i]){
            bfs(i);
        }
    }
    for (auto i : results){
        for (auto j : i) cout << j << " ";
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    readData();
    Solve();

    return 0;
}
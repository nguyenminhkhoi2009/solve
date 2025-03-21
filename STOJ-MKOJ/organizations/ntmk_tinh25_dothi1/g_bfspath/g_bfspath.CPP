#include <bits/stdc++.h>
#define ll long long
#define task "g_bfspath"
#define endl '\n'
using namespace std;

const ll maxn = 1e6 + 15;
ll n, m, s, t;
vector<ll> g[maxn];

void readData() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen(task".INP", "r", stdin);
    freopen(task".OUT", "w", stdout);
    cin >> n >> m >> s >> t;
    ll u, v;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v;
        g[u].push_back(v);
    }
}

ll d[maxn], par[maxn];
bool visited[maxn];

void bfs() {
    fill_n(d, n + 1, 0);
    fill_n(par, n + 1, -1);
    fill_n(visited, n + 1, false);
    queue<ll> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty()) {
        ll u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (!visited[v]) {
                d[v] = d[u] + 1;
                par[v] = u;
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void trace() {
    if (!visited[t]) {
        cout << -1;
    } else {
        vector<ll> path;
        for (ll v = t; v != -1; v = par[v]) {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());
        for (auto i : path) {
            cout << i << " ";
        }
    }
}

void Solve() {
    for (ll i = 1; i <= n; i++) {
        sort(g[i].begin(), g[i].end());
    }
    bfs();
    trace();
}

int main() {
    readData();
    Solve();
    return 0;
}

/*
Problem: http://chuyenminhkhai.ddns.net/problem/g_bfspath
Geeks For Geeks: https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/
VNOI Wiki: https://wiki.vnoi.info/algo/graph-theory/breadth-first-search.md
*/
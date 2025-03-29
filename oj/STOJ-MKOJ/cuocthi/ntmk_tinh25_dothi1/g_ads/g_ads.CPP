#include <bits/stdc++.h>

typedef long long ll;

#define task ""
#define endl '\n'

using namespace std;

ll n, m;
vector <vector<ll>> grid;
vector <vector<bool>> used

void readData() {
    // freopen(task".INP", "r", stdin);
    // freopen(task".OUT", "w", stdout);
    ll u, v;
    cin >> n >> m;
    grid.resize(n, vector<ll>(m));
    used.resize(n, vector<ll>(m), false);
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> u >> v;
            vector[u].push_back(v);
            vector[v].push_back(u);
        }
    }
}

void bfs (ll a, ll b){

}

void Solve() {
    for (ll i = 1; i < = n; i++){
        for (ll j = 1; j <= m; j++){
            if (!used[i][j]){
                bfs(i, j);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    readData();
    Solve();
    
    return 0;
}
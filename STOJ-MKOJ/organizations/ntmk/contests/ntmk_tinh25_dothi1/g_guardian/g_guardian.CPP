#include <bits/stdc++.h>

typedef long long ll;

#define task "g_guardian"
#define endl '\n'

using namespace std;

ll n, m;
bool ishill;
vector <vector<ll>> h;
vector <vector<bool>> visited;
ll dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
ll dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void readData() {
    //freopen(task".INP", "r", stdin);
    //freopen(task".OUT", "w", stdout);
    cin >> n >> m;
    h.resize(n, vector<ll>(m));
    visited.resize(n, vector<bool>(m, false));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> h[i][j];
        }
    }
}

void dfs (ll r, ll c){
    visited[r][c] = true;
    for (ll i = 0; i < 8; i++){
        ll nx = r + dx[i], ny = c + dy[i];
        if (nx >= 0 && ny >= 0 && nx < n && ny < m){
            if (ishill && h[nx][ny] > h[r][c]) ishill = false;
            if (h[nx][ny] == h[r][c] && !visited[nx][ny]) dfs(nx, ny);
        }
    }
}

void Solve() {
    ll count = 0;
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            ishill = true;
            if (visited[i][j]) continue;
            visited[i][j] = true;
            dfs(i, j);
            if (ishill) count++;
        }
    }
    cout << count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    readData();
    Solve();

    return 0;
}
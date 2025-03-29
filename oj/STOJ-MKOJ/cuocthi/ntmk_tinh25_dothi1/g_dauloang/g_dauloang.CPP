#include <bits/stdc++.h>

typedef long long ll;

#define task "g_dauloang"
#define endl '\n'

using namespace std;

ll n, m;
vector <vector<ll>> grid;
vector <vector<bool>> visited;
vector <ll> oils;

void readData() {
    //freopen(task".INP", "r", stdin);
    //freopen(task".OUT", "w", stdout);
    cin >> n >> m;
    grid.resize(n, vector<ll>(m));
    visited.assign(n, vector<bool>(m, false));
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
}

ll dx [] = {1, -1, 0, 0};
ll dy [] = {0, 0, 1, -1 };

void bfs(ll a, ll b){
    if (grid[a][b] != 1 || visited[a][b]) return;
    ll oil = 0;
    visited[a][b] = true;
    queue <pair<ll, ll>> q;
    q.push({a, b});
    while (!q.empty()){
        ll x = q.front().first, y = q.front().second;
        oil++;
        q.pop();
        for (ll i = 0; i < 4; i++){
            ll nx = x + dx[i], ny = y + dy[i];
            if (0 <= nx && nx < n && 0 <= ny && ny < m && grid[nx][ny] != 0 && !visited[nx][ny]){
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    oils.push_back(oil);
}

void Solve() {
    map <ll, ll> mp;
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            if (!visited[i][j] && grid[i][j] == 1) bfs(i, j);
        }
    }
    for (auto i : oils){
        mp[i]++;
    }
    cout << oils.size() << endl;
    for (auto i : mp){
        if (i.first == 0) continue;
        cout << i.first << " " << i.second << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    readData();
    Solve();
    
    return 0;
}
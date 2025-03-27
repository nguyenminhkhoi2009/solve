#include <bits/stdc++.h>

typedef long long ll;

#define task "g_farm"
#define endl '\n'

using namespace std;

ll n, m, tong_ga = 0, tong_cao = 0;
vector < vector<char> > vec;
vector < vector <bool> > visited;

void readData() {
    //freopen(task".INP", "r", stdin);
    //freopen(task".OUT", "w", stdout);
    cin >> n >> m;
    vec.resize(n, vector<char>(m));
    visited.assign(n+1, vector<bool>(m+1, false));
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> vec[i][j];
        }
    }
}

ll dx [] = {0,0,1,-1};
ll dy [] = {1,-1,0,0};

void bfs(ll a, ll b){
    ll ga = 0, cao = 0;
    queue <pair<ll, ll>> q;
    q.push({a, b});
    visited[a][b] = true;
    while(!q.empty()){
        ll x = q.front().first, y = q.front().second;
        q.pop();
        if (vec[x][y] == 'c') ga++;
        else if (vec[x][y] == 'f') cao++;
        for (ll i = 0; i < 4; i++){
            ll nx = x + dx[i], ny = y + dy[i];
            if (0 <= nx && nx < n && 0 <= ny && ny < m && vec[nx][ny] != '#' && !visited[nx][ny]){
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
    if (ga > cao) tong_ga += ga;
    else tong_cao += cao;
}

void Solve() {
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            if (vec[i][j] != '#' && !visited[i][j]){
                bfs(i, j);
            }
        }
    }
    cout << tong_cao << " " << tong_ga;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    readData();
    Solve();
    
    return 0;
}
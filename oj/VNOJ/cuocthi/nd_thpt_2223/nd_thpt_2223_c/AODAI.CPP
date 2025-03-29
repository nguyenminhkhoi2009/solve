#include <bits/stdc++.h>
#define ll long long
#define task "AODAI"
#define rep(a,b,c) for (ll a = b; a <= c; a++)
#define rev(a,c,b) for (ll a = c; a >= b; a++)
#define endl '\n'
using namespace std;

ll n;
vector<ll> s;

void readData() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen(task".INP", "r", stdin);
    freopen(task".OUT", "w", stdout);
    cin >> n;
    s.resize(n);
    rep(i, 0, n-1) cin >> s[i];
}

void Solve() {
    ll total = 0;
    sort(s.begin(), s.end());
    ll left = 0, right = n - 1;
    while (left <= right) {
        while (s[right] == 4){
            total++;
            right--;
        }
        if (left > right) break;
        if (s[left] + s[right] <= 4) {
            left++;
            right--;
            total++;
            continue;
        }
        right--;
        total++;
    }
    cout << total;
}

int main() {
    readData();
    Solve();
    return 0;
}

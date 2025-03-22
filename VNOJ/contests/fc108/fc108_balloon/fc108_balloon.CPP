#include <bits/stdc++.h>
#define ll long long
#define task "fc108_balloon"
#define rep(a,b,c) for (ll a = b; a <= c; a++)
#define rev(a,c,b) for (ll a = c; a >= b; a--)
#define endl '\n'
using namespace std;

ll n, MOD;
vector<ll> c;

void readData(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    //freopen(task".INP", "r", stdin);
    //freopen(task".OUT", "w", stdout);
    cin >> n >> MOD;
    c.resize(n);
    for (ll i = 0; i < n; i++) cin >> c[i];
}

ll Calculate_RPM(ll a, ll b, ll mod) {
    ll res = 0;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res + a) % mod;
        }
        a = (a * 2) % mod;
        b = b / 2;
    }
    return res % mod;
}

void Solve(){
    sort(c.begin(), c.end());
    ll sum = 1;
    for (ll i = 0; i < n; i++){
        if (c[i] - i <= 0) {
            cout << 0;
            return;
        }
        sum = Calculate_RPM(sum, c[i] - i, MOD);
    }
    cout << sum % MOD;
}

int main(){
    readData();
    Solve();
    return 0;
}

/*
Credit:
    Problem: https://oj.vnoi.info/problem/fc108_balloon
    Contest: https://docs.google.com/viewer?url=https://raw.githubusercontent.com/nguyenminhkhoi2009/solve/main/Unnamed/20250322/STOI_test03.pdf
    Document: https://docs.google.com/viewer?url=https://raw.githubusercontent.com/nguyenminhkhoi2009/solve/main/Documents/L%C3%BD%20thuy%E1%BA%BFt%20b%C3%A0i%20to%C3%A1n%20%C4%91%E1%BA%BFm_HS.pdf
    Wikihow: https://www.wikihow.com/Multiply-Using-the-Russian-Peasant-Method
    Recipe: i = 0 -> n-1: sum = (sum * (c[i] - i)) % mod (using Russian Peasant Multiplication)
*/
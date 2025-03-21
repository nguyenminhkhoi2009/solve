#include <bits/stdc++.h>
#define ll long long
#define task "tohop_rook1"
#define endl '\n'
using namespace std;

const ll MOD = 1000001;
ll m, n, k;

ll Calculate_GT(ll a) {
    ll temp = 1;
    for (ll i = 2; i <= a; i++) {
        temp = (temp * i) % MOD;
    }
    return temp;
}

ll Calculate_TH(ll n, ll k) {
    if (k > n) return 0;
    ll res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res % MOD;
}

ll Solve() {
    ll C_mk = Calculate_TH(m, k);
    ll C_nk = Calculate_TH(n, k);
    ll GT_k = Calculate_GT(k);
    return ( ((C_mk * C_nk) % MOD ) * GT_k) % MOD;
}

void readData() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    //freopen(task".INP", "r", stdin);
    //freopen(task".OUT", "w", stdout);
    ll t;
    cin >> t;
    while (t--) {
        cin >> m >> n >> k;
        cout << Solve() << endl;
    }
}

int main() {
    readData();
    return 0;
}

/*
Problem: http://chuyenminhkhai.ddns.net/problem/tohop_rook1
Vietjack: https://vietjack.com/toan-10-kn/ly-thuyet-bai-23-quy-tac-dem.jsp
Document: https://docs.google.com/viewer?url=https://raw.githubusercontent.com/nguyenminhkhoi2009/solve/main/Documents/L%C3%BD%20thuy%E1%BA%BFt%20b%C3%A0i%20to%C3%A1n%20%C4%91%E1%BA%BFm_HS.pdf
*/
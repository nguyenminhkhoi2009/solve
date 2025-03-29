#include <bits/stdc++.h>
#define ll long long
#define task "SODEP"
#define rep(a,b,c) for (ll a = b; a <= c; a++)
#define rev(a,c,b) for (ll a = c; a >= b; a++)
#define endl '\n'
using namespace std;

ll n;

void readData(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen(task".INP", "r", stdin);
    freopen(task".OUT", "w", stdout);
    cin >> n;
}

void Solve(){
    ll temp = 0;
    while (n > 0){
        temp += n % 10;
        n /= 10;
    }
    cout << (temp % 10 == 9);
}

int main(){
    readData();
    Solve();
    return 0;
}
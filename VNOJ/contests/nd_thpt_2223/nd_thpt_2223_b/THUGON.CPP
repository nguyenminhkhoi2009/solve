#include <bits/stdc++.h>
#define ll long long
#define task "THUGON"
#define rep(a,b,c) for (ll a = b; a <= c; a++)
#define rev(a,c,b) for (ll a = c; a >= b; a++)
#define endl '\n'
using namespace std;

vector <string> vec;

void readData(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen(task".INP", "r", stdin);
    freopen(task".OUT", "w", stdout);
    string temp;
    while(getline(cin, temp)){
        vec.push_back(temp);
    }
}

void thugon(string n){    
    char currentchar = n[0];
    ll lengthofchar = 1;
    rep(i, 1, n.length()-1){
        if (n[i] != currentchar){
            if (lengthofchar == 1) cout << currentchar;
            else cout << lengthofchar << currentchar;
            currentchar = n[i];
            lengthofchar = 1;
        } else {
            lengthofchar++;
        }
    }
    if (lengthofchar == 1) cout << currentchar;
    else cout << lengthofchar << currentchar;
}
void Solve(){
    for(auto i : vec){
        thugon(i);
        cout << endl;
    }
}

int main(){
    readData();
    Solve();
    return 0;
}
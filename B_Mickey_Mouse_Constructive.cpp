#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pi pair<ll,ll>
#define mapii map<ll, ll>
#define vpi vector<pair<ll,ll>>
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";

int MOD = 676767677;

/*

*/

ll div(ll n) {
    ll cnt = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if (i != n / i){
                cnt++;
            }
        }
    }
    return cnt % MOD;
}


void solve()
{
    ll x, y;
    cin >> x >> y;
    if(x == y){
        cout << 1 << endl;
        for (int i = 0; i < x; i++)
        {
            cout << 1 << " ";
        }
        for (int i = 0; i < y; i++)
        {
            cout << -1 << " ";
        }
        cout << endl;
        return;
    }
    if(x > y){
        cout << div((x - y)) % MOD << endl;
        for (int i = 0; i < x; i++)
        {
            cout << 1 << " ";
        }
        for (int i = 0; i < y; i++)
        {
            cout << -1 << " ";
        }
        cout << endl;
    }
    else{
        cout << div((y - x)) % MOD << endl;
        for (int i = 0; i < x; i++)
        {
            cout << 1 << " ";
        }
        for (int i = 0; i < y; i++)
        {
            cout << -1 << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
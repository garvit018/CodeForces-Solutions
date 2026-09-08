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
int MOD = 998244353;
/*

*/


ll Power(ll a, ll b){
    ll res = 1;
    a %= MOD;
    while(b > 0){
        if(b & 1){
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}

void solve()
{
    ll n, m, r, c;
    cin >> n >> m >> r >> c;
    ll ans = (c - 1) * n + (r - 1) * m - (r - 1) * (c - 1);
    cout << Power(2, ans) << endl;
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
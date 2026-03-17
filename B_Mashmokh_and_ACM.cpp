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

ll MOD = 1e9 + 7;

/*

*/

ll f(ll len, ll prev, ll n, ll k, vvi& dp){
    if(len == k){
        return 1;
    }
    if(dp[len][prev] != -1){
        return dp[len][prev];
    }
    ll ans = 0;
    for(int i = prev; i <= n; i += prev){
        ans = (ans + f(len + 1, i, n, k, dp)) % MOD;
    }
    return dp[len][prev] = ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    vvi dp(k + 1, vi(n + 1, -1));
    for(int i = 1; i <= n; i++){
        ans =(ans + f(1, i, n, k, dp)) % MOD;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
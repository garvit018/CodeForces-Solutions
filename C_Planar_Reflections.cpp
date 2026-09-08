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
int MOD = 1e9 + 7;
/*

*/

void solve()
{
    ll n, k;
    cin >> n >> k;
    vvi dp(k + 1, vi(n + 1, 0));    
    for(int i = 0; i <= n; i++){
        dp[1][i] = 1;
    }
    for(int i = 0; i <= k; i++){
        dp[i][0] = 1;
    }
    for(int i = 2; i <= k; i++){
        for(int j = 1; j <= n; j++){
            dp[i][j] = dp[i][j - 1] % MOD;
            if(n - j >= 0){
                dp[i][j] = (dp[i][j] + dp[i - 1][n - j]) % MOD;
            }
        }
    }
    cout << dp[k][n] << endl;
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
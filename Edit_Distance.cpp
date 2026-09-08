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

/*

*/

void solve()
{
    string s, t;
    cin >> s >> t;
    ll n = s.size(), m = t.size();
    vvi dp(n + 1, vi(m + 1, 0)); // min oper on string till i, j
    for(int i = 0; i <= n; i++){
        dp[i][0] = i;
    }
    for(int j = 0; j <= m; j++){
        dp[0][j] = j;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0){
                continue;
            }
            if(j == 0){
                continue;
            }
            if(i > 0 && j > 0 && s[i - 1] == t[j - 1]){
                dp[i][j] = dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]});
            }
        }
    }
    cout << dp[n][m] << endl;
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
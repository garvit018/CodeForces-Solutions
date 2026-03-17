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

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

/*
if TLE means this logic is correct warna aur kuch socho 
memoize it 
2D dp wont work 
space optimize this 
*/

ll f(ll i, ll n, vi& s, vi& dp){
    if(i >= n){
        return 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    ll ok = 0;
    for(int j = 2 * (i + 1) - 1; j < n; j += (i + 1)){
        if(s[j] > s[i]){
            ok = max(ok, 1 + f(j, n, s, dp));
        }
    }
    return dp[i] = ok;
}

void solve()
{
    ll n;
    cin >> n;
    vi s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    // vvi dp(n, vi(n + 1, -1));
    vi dp(n + 1, -1);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, f(i, n, s, dp));
    }
    cout << ans + 1 << endl;
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
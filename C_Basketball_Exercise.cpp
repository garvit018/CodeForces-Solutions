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
normally suppose skip kre 
and suppose take = 1 -> take from arr then move to the next 
take = 2 -> take from brr and move to the next

TLE dega mtlb logic shi hai
*/

/*
ll f(ll i, ll prev, ll n, vi& arr, vi& brr, vvi& dp){
    if(i >= n){
        return 0;
    }
    if(dp[i][prev] != -1){
        return dp[i][prev];
    }
    ll ans = f(i + 1, prev, n, arr, brr, dp);
    if(prev != 1){
        ans = max(ans, arr[i] + f(i + 1, 1, n, arr, brr, dp));
    }
    if(prev != 2){
        ans = max(ans, brr[i] + f(i + 1, 2, n, arr, brr, dp));
    }
    return dp[i][prev] = ans;
}
*/

/*
void solve()
{
    ll n;
    cin >> n;
    vi arr(n), brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    vvi dp(n + 1, vi(3, 0));
    // cout << f(0, 0, n, arr, brr, dp) << endl;
    for(int i = 1; i <= n; i++){
        for(int prev = 0; prev < 3; prev++){
            dp[i][prev] = max(dp[i][prev], dp[i - 1][prev]);
            if(prev != 1){
                dp[i][1] = max(dp[i][1], dp[i - 1][prev] + arr[i - 1]);
            }
            if(prev != 2){
                dp[i][2] = max(dp[i][2], brr[i - 1] + dp[i - 1][prev]);
            }

        }
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
}
*/
void solve()
{
    ll n;
    cin >> n;
    vi arr(n), brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    vi dpa(n + 1, 0), dpb(n + 1, 0);
    for(int i = 1; i <= n; i++){
        dpa[i] = max(dpa[i - 1], arr[i - 1] + dpb[i - 1]);
        dpb[i] = max(dpb[i - 1], brr[i - 1] + dpa[i - 1]);
    }
    cout << max(dpa[n], dpb[n]) << endl;
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
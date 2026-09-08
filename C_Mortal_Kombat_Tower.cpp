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
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
/*
    ll ans = arr[0];
    ll cnt = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] == 1){
            cnt++;
        }
        else{
            ans += cnt / 3;
            cnt = 0;
        }
    }
    ans += cnt / 3;
    cout << ans << endl;
*/
    vvi dp(n + 1, vi(2, 0));
    dp[n][0] = dp[n][1] = 0;
    dp[n - 1][0] = 0;
    dp[n - 1][1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        dp[i][0] = min(dp[i + 1][1], dp[i + 2][1]);
        dp[i][1] = min(dp[i + 1][0] + arr[i], dp[i + 2][0] + arr[i] + arr[i + 1]);
    }
    cout << dp[0][1] << endl;
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
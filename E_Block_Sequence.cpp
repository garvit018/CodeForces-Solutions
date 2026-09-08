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
dp[i] = number of ele remove to get beautiful 
ya to delete ya take
*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vi dp(n + 1, 1e5);
    dp[n] = 0;
    for(int i = n - 1; i >= 0; i--){
        dp[i] = 1 + dp[i + 1]; // delete 
        if(i + 1 + arr[i] <= n){
            dp[i] = min(dp[i], dp[i + 1 + arr[i]]); // take it, and agle block pr jao
        }
    }
    cout << dp[0] << endl;
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
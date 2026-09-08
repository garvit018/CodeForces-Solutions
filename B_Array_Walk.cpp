#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vvvi vector<vvi>
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
ll n, k, z;
ll fun(ll i, ll lef, ll ok, vi& arr, vvvi& dp){
    if(i == k){
        return 0;
    }
    if(dp[i][lef][ok] != -1){
        return dp[i][lef][ok];
    }
    ll idx = (i - lef) - lef; // right - left hai starting posi rn
    ll sum = 0;
    if(idx < n){ //right
        sum = max(sum, arr[idx + 1] + fun(i + 1, lef, 0, arr, dp));
    }
    if(idx > 0 && lef < z && ok == 0){ //left
        sum = max(sum, arr[idx - 1] + fun(i + 1, lef + 1, 1, arr, dp));
    }
    return dp[i][lef][ok] = sum;
}

void solve()
{
    cin >> n >> k >> z;
    vi arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vvvi dp(k + 1, vvi(z + 1, vi(2, -1)));
    cout << arr[0] + fun(0, 0, 0, arr, dp) << endl;
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
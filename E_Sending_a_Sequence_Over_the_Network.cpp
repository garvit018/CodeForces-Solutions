#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vb vector<bool>
#define vvb vector<vector<bool>>
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
    vi dp(n + 1, 0);
    dp[0] = 1;  
    for(int i = 0; i < n; i++){
        if(dp[i] && i + arr[i] + 1 <= n){
            dp[i + arr[i] + 1] = 1;
        }
        if(i - arr[i] >= 0 && dp[i - arr[i]]){
            dp[i + 1] = 1;
        }
    }
    cout << (dp[n] ? "YES" : "NO") << endl;
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
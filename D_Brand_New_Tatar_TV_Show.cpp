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
    ll n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mapii mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    ll ans = INT_MAX;
    bool ok = false;
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        ll val = it->first;
        ll freq = it->second;
        if(val <= ans){
            if(freq % 2 == 0){
                ok = true;
                break;
            }
            else{
                ans = val - k - 1;
            }
        }   
        else{
            ok = true;
            break;
        }
    }
    if(ok){
        yes;
        return;
    }
    no;










    // vi dp(n, 0);
    // ll mini = INT_MAX;
    // bool ans = false;
    // for(int i = n - 1; i >= 0; i--){
    //     bool ok = false;
    //     if(i + 1 < n && arr[i] == arr[i + 1] && dp[i + 1] == 0){
    //         ok = true;
    //     }
    //     if(mini <= arr[i] + k){
    //         ok = true;
    //     }
    //     dp[i] = ok;
    //     bool f = false;
    //     if(i == 0 || arr[i] != arr[i - 1]){
    //         f = true;
    //     }
    //     if(dp[i] == 0){
    //         if(f){
    //             mini = min(mini, arr[i]);
    //         }
    //     }
    //     if(f && dp[i] == 1){
    //         ans = true;
    //     }
    // }
    // if(ans){
    //     yes;
    //     return;
    // }
    // no;
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
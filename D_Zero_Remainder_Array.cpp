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
k*cnt - rem
*/

void solve()
{
    ll n, k;
    cin >> n >> k;
    vi arr(n);
    mapii mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i] % k]++;
    }
    ll ans = 0;
    // for(int i = 1; i < k; i++){
    //     if(mp[i] == 0){
    //         continue;
    //     }
    //     ans = max(ans, (mp[i] * k) - i);
    // }
    // if(ans != 0){
    //     ans++;
    // }
    for(auto it : mp){
        ll rem = it.first;
        ll cnt = it.second;
        if(rem == 0){
            continue;
        }
        ans = max(ans, k * cnt - rem);
    }
    if(ans != 0){
        ans++;
    }
    cout << ans << endl;
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
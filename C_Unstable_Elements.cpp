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
    mapii mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    mapii freq;
    for(auto it : mp){
        freq[it.second]++;
    }
    ll ans = 0;
    ll m = mp.size();
    for(auto it : freq){
        ll cnt = it.first;
        ll fre = it.second;
        if((n - k) % m == 0){
            ll rem = (n - k) / m;
            if(rem < cnt){
                ans++;
            }
        }
        n -= (fre * cnt);
        m -= fre;
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
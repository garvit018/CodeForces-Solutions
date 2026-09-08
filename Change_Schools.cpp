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
    ll maxi = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        if(mp[arr[i]] > maxi){
            maxi = mp[arr[i]];
        }
    }
    ll ans = 0;
    for(int i = 1; i <= k; i++){
        if(mp[i] + 1 >= maxi){
            ans++;
        }
    }
    cout << ans << endl;
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
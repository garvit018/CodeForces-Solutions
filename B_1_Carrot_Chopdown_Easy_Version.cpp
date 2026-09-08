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
    ll n, m;
    cin >> n >> m;
    vi arr(n);
    mapii mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vi pref(m + 1, 0);
    for(int i = 1; i <= m; i++){
        pref[i] = pref[i - 1] + mp[i];
    }
    ll ans = 0;
    ll t = m;
    while(t--){
        for(int i = 1; i <= m; i++){
            ll maxi = (mp[i] + n - pref[i] + mp[2 * i]);
            ans = max(ans, maxi);
        }
        cout << ans << " ";
    }
    cout << endl;
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
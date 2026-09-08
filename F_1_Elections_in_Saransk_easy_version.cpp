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

int MOD = 1e9 + 7;

/*

*/

void solve()
{
    ll n, x;
    cin >> n >> x;
    vi arr(n);
    mapii mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 2; j * j <= arr[i]; j++){
            while(arr[i] % j == 0){
                mp[j]++;
                arr[i] /= j;
            }
        }
        if(arr[i] > 1){
            mp[arr[i]]++;
        }
    }
    ll ans = 1;
    for(auto it : mp){
        ans = (ans * (it.second + 1)) % MOD;
    }
    cout << ans % MOD << endl;
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
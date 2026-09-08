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
int MOD = 998244353;

/*

*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    ll x = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        x ^= arr[i];
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    if(x == 0){
        cout << 1 << endl;
        return;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if((x ^ arr[i]) < arr[i]){
            ans++;
        }
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
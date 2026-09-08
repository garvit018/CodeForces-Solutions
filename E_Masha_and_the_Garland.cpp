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

ll ceel(ll a, ll b){
    if(b == 0){
        return 0;
    }
    return (a + b - 1) / 2;
}

void solve()
{
    ll n, q;
    string s;
    cin >> n >> q >> s;
    vi pref(n, 0);
    for(int i = 0; i < n - 1; i++){
        if(s[i] == s[i + 1]){
            pref[i + 1] = pref[i] + 1;
        }
        else{
            pref[i + 1] = pref[i];
        }
    }
    while(q--){
        ll l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        // ll cnt = 0;
        // for(int i = l; i < r; i++){
        //     if(s[i] == s[i + 1]){
        //         cnt++;
        //     }
        // }
        // if(k >= ceel(cnt, 2)){
        //     yes;
        // }
        // else{
        //     no;
        // }

        ll cnt = pref[r] - pref[l];
        if(k >= ceel(cnt, 2)){
            yes;
        }
        else{
            no;
        }
    }
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
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
    ll n;
    cin >> n;
    vi arr(n + 1);
    ll x0 = 0, x1 = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    s = '1' + s;
    for(int i = 1; i <= n; i++){
        if(s[i] == '1'){
            x1 ^= arr[i];
        }
        else{
            x0 ^= arr[i];
        }
    }
    ll q;
    cin >> q;
    vi pref(n + 1, 0);
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1]^arr[i];
    }
    for(int i = 0; i < q; i++){
        ll tp;
        cin >> tp;
        if(tp == 1){
            ll l, r;
            cin >> l >> r;
            x0 ^= (pref[r]^pref[l - 1]);
            x1 ^= (pref[r]^pref[l - 1]);
        }
        else{
            ll g;
            cin >> g;
            if(g == 0){
                cout << x0 << " ";
            }
            else{
                cout << x1 << " ";
            }
        }
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
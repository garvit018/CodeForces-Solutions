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
    ll n, q;
    cin >> n >> q;
    vi arr(n);
    vi ti(n, 0);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    ll val = 0;
    ll k = -1;
    ll j = 0;
    while(q--){
        j++;
        ll t;
        cin >> t;
        ll l;
        if(t == 1){
            ll i, x;
            cin >> i >> x;
            i--;
            if(ti[i] > k){
                l = arr[i];
            }
            else{
                l = val;
            }
            sum = sum - l + x;
            arr[i] = x;
            ti[i] = j;
            cout << sum << endl;
        }
        else{
            ll x;
            cin >> x;
            sum = n * x;
            val = x;
            k = j;
            cout << sum << endl;
        }
    }
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
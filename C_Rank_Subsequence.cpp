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
    vi l(n), r(n), u(n), v(n);
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i] >> u[i] >> v[i];
        l[i]--, r[i]--;
        u[i]--, v[i]--;
    }
    for(int i = n; i >= 0; i--){
        ll len = 0;
        for(int j = 0; j < n; j++){
            if(len == i){
                break;
            }
            ll le = len;
            ll ri = i - len - 1;
            if(le < l[j] || le > r[j]){
                if(ri < u[j] || ri > v[j]){
                    len++;
                }
            }
        }
        if(len == i){
            cout << i << endl;
            return;
        }
    }
    cout << 0 << endl;
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
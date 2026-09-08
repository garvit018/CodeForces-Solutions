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

bool check(ll mid, vi& l, vi & r, vi &x, ll n, ll m){
    vi arr(n, 0);
    for(int i = 0; i < mid; i++){
        arr[x[i]] = 1;
    }
    vi pref(n, 0);
    pref[0] = (arr[0] == 1 ? 1 : 0);
    for(int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + arr[i];
    }
    for(int i = 0; i < m; i++){
        ll dif = pref[r[i]];
        if(l[i] > 0) dif = pref[r[i]] - pref[l[i] - 1];
        ll sz = r[i] - l[i] + 1;
        if(dif > sz / 2){
            return true;
        }
    }
    return false;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vi l(m), r(m);
    for(int i = 0; i < m; i++){
        cin >> l[i] >> r[i];
        l[i]--, r[i]--;
    }
    ll q;
    cin >> q;
    vi x(q);
    for(int i = 0; i < q; i++){
        cin >> x[i];
        x[i]--;
    }
    ll low = 0, high = q;
    ll ans = 1e9;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(check(mid, l, r, x, n, m)){
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }
    cout << (ans == 1e9 ? -1 : ans) << endl;
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
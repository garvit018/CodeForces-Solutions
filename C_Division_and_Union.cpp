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
    // vpi pp(n);
    vector<tuple<ll, ll, ll>> p;
    for(int i = 0; i < n; i++){
        // cin >> pp[i].first >> pp[i].second;
        ll l, r;
        cin >> l >> r;
        p.pb({l, r, i});
    }
    // ll c = pp[0].second;
    sort(all(p));
    ll c = get<1>(p[0]); // r hai p[0] ka 
    ll idx = -1;
    for(int i = 0; i < n; i++){
        // if(pp[i].first > c){
        if(get<0>(p[i]) > c){
            idx = i;
            break;
        }
        else{
            // c = max(c, pp[i].second);
            c = max(c, get<1>(p[i]));
        }
    }
    if(idx == -1){
        cout << -1 << endl;
        return;
    }
    // for(int i = 0; i < idx; i++){
    //     cout << 1 << " ";
    // }
    // for(int i = idx; i < n; i++){
    //     cout << 2 << " ";
    // }
    vi ans(n);
    for(int i = 0; i < idx; i++){
        ans[get<2>(p[i])] = 1;
    }
    for(int i = idx; i < n; i++){
        ans[get<2>(p[i])] = 2;
    }
    for(auto it : ans){
        cout << it << ' ';
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
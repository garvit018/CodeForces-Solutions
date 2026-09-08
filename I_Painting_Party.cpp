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
    ll l, q;
    cin >> l >> q;
    vi a(q), b(q), c(q);
    vi ans(l, 0);
    vvi qu(q);
    for(int i = 0; i < q; i++){
        ll t;
        cin >> t;
        if(t == 1){
            cin >> a[i] >> b[i] >> c[i];
            a[i]--, b[i]--;
            qu[i].pb(1);
            qu[i].pb(a[i]);
            qu[i].pb(b[i]);
            qu[i].pb(c[i]);
        }
        else{
            qu[i].pb(2);
        }
    }
    ll rev = 0;
    vi vis(l, 0);
    vi parent(l + 1, 0);
    for(int i = 0; i <= l; i++){
        parent[i] = i;
    }
    function<ll(ll)>findParent = [&](ll node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findParent(parent[node]);
    };
    for(int i = q - 1; i >= 0; i--){
        if(qu[i][0] == 1){
            ll le = qu[i][1];
            ll ri = qu[i][2];
            ll co = qu[i][3];
            // for(int j = le; j <= ri; j++){
            //     ll idx = -1;
            //     if(rev){
            //         idx = l - j - 1;
            //     }
            //     else{
            //         idx = j;
            //     }
            //     if(!vis[idx]){
            //         ans[idx] = co;
            //         vis[idx] = 1;
            //     }
            // }
            ll par = findParent(le);
            for(int j = par; j <= ri; j = findParent(j)){
                ll idx = -1;
                if(rev){
                    idx = l - j - 1;
                }
                else{
                    idx = j;
                }
                ans[idx] = co;
                parent[j] = j + 1;
            }
        }
        else{
            rev = !rev;
        }
    }
    for(int i = 0; i < l; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
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
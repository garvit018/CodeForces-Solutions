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
alt -> ek incoming, ek outgoing no two cant be same (think like bipartite)
*/

void solve()
{
    ll n, m;
    cin >> n >> m;
    vvi adj(n);
    for(int i = 0; i < m; i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if(m == 0){
        cout << n << endl;
        return;
    }
    vi c(n, 0), vis(n, 0);
    ll cnt = 0, cnt1 = 0;
    bool ok = true;
    function<void(ll, ll)> dfs = [&](ll node, ll col){
        c[node] = col;
        vis[node] = 1;
        if(col == 0){
            cnt++;
        }
        else{
            cnt1++;
        }
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it, !col);
            }
            if(c[it] == col){
                ok = false;
            }
        }
    };
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            cnt = 0, cnt1 = 0;
            ok = true;
            dfs(i, 0);
            if(ok){
                ans += max(cnt, cnt1);
            }
        }
    }
    cout << ans << endl;
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
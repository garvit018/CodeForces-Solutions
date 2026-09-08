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
void dfs(ll n, vvi &adj, ll node, vi &vis, vi &size){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(n, adj, it, vis, size);
            size[node] += size[it];
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vvi adj(n);
    for(int i = 0; i < n - 1; i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if(n & 1){
        cout << -1 << endl;
        return;
    }
    vi vis(n, 0), size(n, 1);
    dfs(n, adj, 0, vis, size);
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(size[i] % 2 == 0){
            cnt++;
        }
    }
    cout << cnt - 1 << endl;
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
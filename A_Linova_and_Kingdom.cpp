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
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n";
#define no cout << "NO\n";

/*
happiness -> no. of cities in path 
solve for max(sum of happiness)

ans = max(depth[i] - sizeOfSubtree[i])
and choose the node whose all the childrens are already chosen(greedily) so that sum can be maximized 
observation is that :- no industry city should not come in path of another non industry city as it will reduce the happiness
so pick greedily least cities 
*/

void dfs(ll node, vvi& adj, vi& sz, vi& depth, vi& vis, vi& ans){
    vis[node] = 1;
    sz[node] = 1; // khud ke node ko subtree size mai add kra hai
    for(auto it : adj[node]){
        if(!vis[it]){
            depth[it] = depth[node] + 1;
            dfs(it, adj, sz, depth, vis, ans);
            sz[node] += sz[it];
        }
    }
    ans[node] += (depth[node] - (sz[node] - 1)); // ek khud ka node bhi (remove kra hai)
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vvi adj(n);
    for(int i = 0; i < n - 1; i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vi sz(n, 0), depth(n, 0), vis(n, 0), ans(n, 0);
    dfs(0, adj, sz, depth, vis, ans);
    sort(rall(ans));
    // for(auto it : ans){
    //     cout << it << " "; 
    // }
    // cout << "SUBTREE SIZE :- ";
    // for(auto it : sz){
    //     cout << it << " "; 
    // }
    // cout << endl;
    // cout << "DEPTH :- ";
    // for(auto it : depth){
    //     cout << it << " "; 
    // }
    ll sum = 0;
    for(int i = 0; i < k; i++){
        sum += ans[i];
    }
    cout << sum << endl;
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
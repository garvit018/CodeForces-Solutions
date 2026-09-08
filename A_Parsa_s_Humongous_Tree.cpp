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

void dfs(ll node, vvi& dp, vvi& adj, vi& l, vi& r, vi& vis){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it, dp, adj, l, r, vis);
            dp[node][0] += max(dp[it][0] + abs(l[node] - l[it]), dp[it][1] + abs(l[node] - r[it]));
            dp[node][1] += max(dp[it][0] + abs(r[node] - l[it]), dp[it][1] + abs(r[node] - r[it]));
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vvi adj(n);
    vi l(n), r(n);
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
    }
    for(int i = 0; i < n - 1; i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vi vis(n, 0);
    vvi dp(n + 1, vi(2, 0));
    dfs(0, dp, adj, l, r, vis);
    cout << max(dp[0][0], dp[0][1]) << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pi pair<ll, ll>
#define mapii map<ll, ll>
#define vpi vector<pair<ll, ll>>
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";

ll MOD = 1e9 + 7;
/*

*/

ll cnt = 0;
void dfs(ll node, vi &vis, vvi &adj){
    vis[node] = 1;
    cnt++;
    for (auto it : adj[node]){
        if (!vis[it]){
            dfs(it, vis, adj);
        }
    }
}

ll poww(ll a, ll b){
    if(a == 1 || b == 0){
        return 1;
    }
    ll s = poww((a * a) % MOD, b / 2);
    if(b & 1){
        return (a * s) % MOD;
    }
    return s % MOD;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vvi adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        u--, v--;
        if (c == 0)
        {
            adj[u].pb(v);
            adj[v].pb(u);
        }
    }
    vi vis(n, 0);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            cnt = 0;
            dfs(i, vis, adj);
            ans = (ans + poww(cnt, k)) % MOD;
        }
    }
    cout << (poww(n, k) - ans + MOD) % MOD << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
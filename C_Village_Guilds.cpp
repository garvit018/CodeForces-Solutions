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
ll ans;
ll dfs(ll node, vvi& adj, vi& vis){
    ll m = 0, s = 0;
    vis[node] = 1;
    for(auto it : adj[node]){
        ll d = -1;
        if(!vis[it]){
            d = dfs(it, adj, vis);
        }
        if(d > m){
            s = m;
            m = d;
        }
        else if(d > s){
            s = d;
        }
    }
    ans += s;
    return m + 1;
}

void solve()
{
    ll n;
    cin >> n;
    vvi adj(n + 1);
    for (int i = 1; i < n; i++) {
        ll p;
        cin >> p;
        adj[p].pb(i + 1);
    }
    vi vis(n + 1, 0);
    ans = 0;
    dfs(1, adj, vis);
    cout << n + ans << endl;
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
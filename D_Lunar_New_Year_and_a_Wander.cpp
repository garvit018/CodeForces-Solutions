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
    ll n, m;
    cin >> n >> m;
    vvi adj(n + 1);
    for(int i = 0; i < m; i++){
        ll u, v;
        cin >> u >> v;
        // u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    priority_queue<ll, vi, greater<ll>> pq;
    vi ans, vis(n + 1, 0);
    pq.push(1);
    // ans.pb(1);
    vis[1] = 1;
    while(!pq.empty()){
        auto node = pq.top();
        pq.pop();
        ans.pb(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                pq.push(it);
            }
        }
    }
    for(int i = 0; i < ans.size(); i++){
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
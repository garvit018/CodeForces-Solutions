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
    vvi adj(n);
    vi indeg(n, 0);
    while(m--){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].pb(v);
        indeg[v]++;
    }
    vi ans, vis(n, 0);
    queue<ll> qt;    
    for(int i = 0; i < n; i++){
        if(indeg[i] == 0){
            vis[i] = 1;
            qt.push(i);
        }
    }
    while(!qt.empty()){
        ll node = qt.front();
        qt.pop();
        ans.pb(node + 1);
        for(auto it : adj[node]){
            if(!vis[it]){
                indeg[it]--;
                if(indeg[it] == 0){
                    qt.push(it);
                    vis[it] = 1;
                }
            }
        }
    }
    if((ll)ans.size() != n){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for(auto it : ans){
        cout << it << " ";
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
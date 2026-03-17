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

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

/*

*/

void dfs(ll par, vvi& adj, vi& c, vi& res){
    bool ok = true;
    for(auto it : adj[par]){
        dfs(it, adj, c, res);
        if(c[it] == 0){
            ok = false;
        }
    }
    if(ok){
        if(c[par] == 1){
            res.pb(par);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vi p(n + 1),c(n + 1);
    vvi adj(n + 1);
    ll root = -1;
    for (int i = 1; i <= n; i++){
        cin >> p[i] >> c[i];
        if(p[i] == -1){
            root = i;
        }
        else{
            adj[p[i]].pb(i);
        }
    }
    vi res;
    dfs(root, adj, c, res);
    sort(all(res));
    if(res.size() == 0){
        cout << -1 << endl;
        return;
    }
    for(auto it : res){
        cout << it << ' ';
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
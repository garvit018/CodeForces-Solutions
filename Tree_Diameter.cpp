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

void dfs(ll node, ll par, ll dis, vvi &adj, ll &bhotDuur, ll &maxi){
    if(dis > maxi){
        maxi = dis;
        bhotDuur = node;
    }
    for(auto it : adj[node]){
        if(it != par){
            dfs(it, node, dis + 1, adj, bhotDuur, maxi);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vvi adj(n);
    n--;
    while(n--){
        ll a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll maxi = -1;
    ll bhotDuur = -1;
    dfs(0, -1, 0, adj, bhotDuur, maxi);
    maxi = -1;
    dfs(bhotDuur, -1, 0, adj, bhotDuur, maxi);
    cout << maxi << endl;
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
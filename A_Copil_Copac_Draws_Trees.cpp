#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vs vector<string>
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

void solve()
{
    ll n;
    cin>>n;
    vector<vpi> adj(n+1); 
    for(int i=1;i<n;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].pb({v,i});
        adj[v].pb({u,i});
    }
    vi vis(n+1,0);
    vi dp(n+1,0);
    // vi ind(n,0);
    dp[1]=0;
    function<void(ll,ll)>dfs=[&](ll node,ll last_idx){
        vis[node]=1;
        for(auto it:adj[node]){
            ll nod=it.first;
            ll idx=it.second;
            if(!vis[nod]){
                if(idx<=last_idx){
                    dp[nod]=1+dp[node];
                }
                else{
                    dp[nod]=dp[node];
                }
                dfs(nod,idx);
            }
        }
    };
    dfs(1,0);
    cout<<*max_element(all(dp))+1<<endl;
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
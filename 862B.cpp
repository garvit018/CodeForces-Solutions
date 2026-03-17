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
    vvi adj(n+1);
    for (int i = 0; i < n-1; i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ll cnt=0,cnt1=0;
    function<void(ll,ll,ll)> dfs=[&](ll node,ll par,ll c){
        if(c==1){
            cnt1++;
        }
        else{
            cnt++;
        }
        for(auto it:adj[node]){
            if(it==par){
                continue;
            }
            dfs(it,node,!c);
        }
    };
    dfs(1,-1,0);
    cout<<(cnt*cnt1)-(n-1)<<endl;
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
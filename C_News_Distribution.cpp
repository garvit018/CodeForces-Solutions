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

struct DSU{
    vi parent,size,rank;
    DSU(ll n){
        parent.resize(n+1);
        size.resize(n+1);
        rank.resize(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            parent[i]=i;
            size[i]=1;
        }
    }

    int findParent(ll node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=findParent(parent[node]);
    }

    void unionByRank(ll u,ll v){
        ll ulp_u=findParent(u);
        ll ulp_v=findParent(v);
        if(ulp_u==ulp_v){
            return;
        }
        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v]=ulp_u;
        }
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(ll u,ll v){
        ll ulp_u=findParent(u);
        ll ulp_v=findParent(v);
        if(ulp_u==ulp_v){
            return;
        }
        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }
};

void solve()
{
    ll n, m;
    cin >> n >> m;
    DSU dsu(n);
    while(m--){
        ll k;
        cin >> k;
        vi arr(k);
        for(int i = 0; i < k; i++){
            cin >> arr[i];
        }
        for(int i = 1; i < k; i++){
            dsu.unionBySize(arr[0], arr[i]);
        }
    }
    vi ans(n + 1);
    for(int i = 1; i <= n; i++){
        ans[i] = dsu.size[dsu.findParent(i)];
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
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
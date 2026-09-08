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

struct DSU{
    vi parent,size,rank;
    DSU(ll n){
        parent.resize(n+1);
        size.resize(n+1);
        rank.resize(n+1,0);
        for (int i = 0; i <= n; i++)
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
    ll n, x, y;
    cin >> n >> x >> y;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    DSU dsu(n);
    for(int i = 0; i < n; i++){
        if(i < n - x){
            dsu.unionByRank(i, i + x);
        }
        if(i < n - y){
            dsu.unionByRank(i, i + y);
        }
    }
    for(int i = 0; i < n; i++){
        if(dsu.findParent(i) != dsu.findParent(arr[i] - 1)){
            no;
            return;
        }
    }
    yes;
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
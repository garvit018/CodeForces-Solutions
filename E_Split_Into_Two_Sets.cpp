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

bool bipart(ll node, vvi& adj, vi& col, ll cur){
    col[node] = cur;
    for(auto it : adj[node]){
        if(col[it] == -1){
            if(!bipart(it, adj, col, 1 - cur)){
                return false;
            }
        }
        else if(col[it] == cur){
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vi arr(n), brr(n);
    vvi adj(n + 1);
    mapii mp;
    bool ok = true;
    for(int i = 0; i < n; i++){
        cin >> arr[i] >> brr[i];
        adj[arr[i]].pb(brr[i]);
        adj[brr[i]].pb(arr[i]);
        mp[arr[i]]++;
        mp[brr[i]]++;
        if(mp[arr[i]] > 2 || mp[brr[i]] > 2){
            ok = false;
        }
    }
    vi col(n + 1, -1);
    for(int i = 1; i <= n; i++){
        if(col[i] == -1){
            if(!bipart(i, adj, col, 0)){
                ok = false;
                break;
            }
        }
    }
    if(!ok){
        no;
    }
    else{
        yes;
    }
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
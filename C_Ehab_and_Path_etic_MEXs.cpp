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
0, 1, 2 hamesha 3 different branches ko dedo jaise mex hamesha <= 2 rhe
baaki random
*/

void solve()
{
    ll n; 
    cin >> n;
    vvi adj(n);
    vi ans(n, -1);
    for(int i = 0; i < n - 1; i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].pb(i);
        adj[v].pb(i);
    }
    ll k = 0;
    for(int i = 0; i < n; i++){
        if(adj[i].size() <= 2){
            continue;
        }
        for(auto it : adj[i]){
            if(ans[it] == -1){
                ans[it] = k;
                k++;
            }
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(ans[i] == -1){
            ans[i] = k;
            k++;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        cout << ans[i] << endl;
    }
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
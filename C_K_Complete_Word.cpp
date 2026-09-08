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

void dfs(vvi &adj, ll node, vi &vis, string &s, ll &cnt, map<char, ll>& mp){
    vis[node] = 1;
    cnt++;
    mp[s[node]]++;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(adj, it, vis, s, cnt, mp);
        }
    }
}

void solve()
{
    ll n, k;
    string s;
    cin >> n >> k >> s;
    vvi adj(n);
    for(int i = 0; i < n / 2; i++){
        adj[n - i - 1].pb(i);
        adj[i].pb(n - i - 1);
    }
    for(int i = 0; i < n - k; i++){
        adj[k + i].pb(i);
        adj[i].pb(k + i);
    }
    vi vis(n, 0);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            map<char, ll> mp;
            ll cnt = 0;
            dfs(adj, i, vis, s, cnt, mp);
            ll maxi = INT_MIN;
            for(auto it : mp){
                maxi = max(maxi, it.second);
            }
            ans += (cnt - maxi);
        }
    }
    cout << ans << endl;
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
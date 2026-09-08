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
max toh no. of connected comp hai 
    now figure out for min
        non cycle wali saari saath mai merge ho skti hai to form 1 single line
*/

bool ok = false;
bool emp = false;
void dfs(ll node, vvi& adj, vi& vis, ll par){
    vis[node] = 1;
    set<ll>st(all(adj[node]));
    if(st.size() < 2){
        emp = true;
    }
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis, node);
        }
        else{
            if(it != par){
                ok = true;
            }
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vvi adj(n + 1);
    for(int i = 0; i < n; i++){
        adj[i + 1].pb(arr[i]);
        adj[arr[i]].pb(i + 1);
    }
    vi vis(n + 1, 0);
    ll maxi = 0, mini = 0;
    for(int i = 1; i <= n; i++){
        ok = false;
        emp = false;
        if(!vis[i]){
            maxi++;
            dfs(i, adj, vis, -1);
        }
        if(ok && !emp){
            mini++;
        }
    }
    if(maxi > mini){
        mini++;
    }
    cout << mini << " " << maxi << endl;
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
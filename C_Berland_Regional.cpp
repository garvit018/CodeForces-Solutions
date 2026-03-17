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
#define rall(x) x.rbegin(), x.rend()
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
    cin >> n;
    vi arr(n), brr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cin >> brr[i];
    }
    vvi adj(n + 1);
    for(int i = 0; i < n; i++){
        adj[arr[i]].pb(brr[i]);
    }
    vvi res(n + 1);
    vi ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        sort(rall(adj[i]));
        res[i].pb(0);
        for(auto it: adj[i]){
            res[i].pb(it + res[i].back());
        }
        ll sz = adj[i].size();
        for(int j = 1; j <= sz; j++){
            ll idx = j * (sz / j);
            ans[j] += res[i][idx];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;    
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
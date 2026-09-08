#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pi pair<ll,ll>
#define mapii map<ll, ll>
#define vpi vector<pair<ll,ll>>
#define vvpi vector<vector<pair<ll,ll>>>
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
int MOD = 1e9 + 7;

/*

*/

void solve()
{
    ll n, m;
    cin >> n >> m;
    vvpi adj(n);
    while(m--){
        ll u, v, wt;
        cin >> u >> v >> wt;
        u--, v--;
        adj[u].pb({v, wt});
    }
    vi dist(n, 1e18), route(n, 0), minFlights(n, 1e18), maxFlights(n, 0);
    route[0] = 1;
    dist[0] = 0;
    minFlights[0] = 0;
    maxFlights[0] = 0;
    priority_queue<pi, vpi, greater<pi>> pq; // {dist, node}
    pq.push({0, 0});
    while(!pq.empty()){
        auto topp = pq.top();
        ll dis = topp.first;
        ll node = topp.second;
        pq.pop();
        if(dis > dist[node]){
            continue;
        }
        for(auto it : adj[node]){
            ll v = it.first;
            ll wt = it.second;
            if(dist[node] + wt < dist[v]){
                dist[v] = dist[node] + wt;
                route[v] = route[node];
                maxFlights[v] = 1 + maxFlights[node];
                minFlights[v] = 1 + minFlights[node];
                pq.push({dist[v], v});
            }
            else if(dist[node] + wt == dist[v]){
                route[v] = (route[v] + route[node]) % MOD;
                minFlights[v] = min(minFlights[v], minFlights[node] + 1);
                maxFlights[v] = max(maxFlights[v], maxFlights[node] + 1);
            }
        }
    }
    cout << dist[n - 1] << " " << route[n - 1] << " " << minFlights[n - 1] << " " << maxFlights[n - 1] << endl;
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
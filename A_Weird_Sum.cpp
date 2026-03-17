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

void solve()
{
    ll n,m;
    cin>>n>>m;
    vvi arr(n,vi(m));
    map<ll,vpi>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            mp[arr[i][j]].pb({i,j});
        }
    }
    ll sum=0;
    for(auto it:mp){
        for(int i=0;i<it.second.size();i++){
            for(int j=0;j<it.second.size();j++){
                sum+=(abs(it.second[i].first-it.second[j].first) + abs(it.second[i].second-it.second[j].second));
            }
        }
    }
    cout<<sum/2<<endl;
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
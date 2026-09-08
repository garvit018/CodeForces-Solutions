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

/*

*/

void solve()
{
    ll n;
    cin >> n;
    vi w(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        sum += w[i];
    }
    vi indeg(n, 0);
    for(int i = 0; i < n - 1; i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        indeg[u]++;
        indeg[v]++;
    }
    vpi pp;
    for(int i = 0; i < n; i++){
        pp.pb({w[i], --indeg[i]});
    }
    sort(rall(pp));
    // for(auto it : pp){
    //     cout << it.first << ' ' << it.second << ' ';
    //     cout << endl;
    // }
    // cout << endl;
    if(n == 2){
        cout << sum << endl;
        return;
    }
    cout << sum << " ";
    for(int i = 0; i < n; i++){
        while(pp[i].second > 0){
            sum += pp[i].first;
            cout << sum << " ";
            pp[i].second--;
        }
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
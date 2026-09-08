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

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    vvi pos(n + 1);
    for(int i = 1; i <= n; i++){
        pos[i].pb(-1);
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pos[arr[i]].pb(i);
    }
    for(int i = 1; i <= n; i++){
        pos[i].pb(n);
    }
    vi ans(n, -1);
    for(int i = 1; i <= n; i++){
        ll maxi = 0;
        for(int j = 1; j < pos[i].size(); j++){
            maxi = max(maxi, pos[i][j] - pos[i][j - 1]);
        }
        maxi = max(maxi, n - pos[i].back());
        for(int j = maxi - 1; j < n; j++){
            if(ans[j] != -1){
                break;
            }
            ans[j] = i;
        }
    }
    for(auto it : ans){
        cout << it << " ";
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
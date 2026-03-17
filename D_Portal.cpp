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
    ll n, x, y;
    cin >> n >> x >> y;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll idx = x;
    for (int i = x; i < y; i++)
    {
        if(arr[i] < arr[idx]){
            idx = i;
        }
    }
    vi temp, ans;
    for(int i = idx; i < y; i++){
        temp.pb(arr[i]);
    }
    for(int i = x; i < idx; i++){
        temp.pb(arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        ans.pb(arr[i]);
    }
    for(int i = y; i < n; i++){
        ans.pb(arr[i]);
    }
    if(x == 0 && y == n){
        for(int i = 0; i < n; i++){
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }
    // for(auto it:temp){
    //     cout << it << " ";
    // }
    // cout << endl;
    // for(auto it: ans){
    //     cout << it << " ";
    // }
    // cout << endl;
    int j = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if(temp[0] <= ans[i]){
            break;
        }
        else {
            cout << ans[i] << " ";
        }
        j++;
    }
    for(auto it: temp){
        cout << it << " ";
    }
    for(int k = j; k < ans.size(); k++){
        cout << ans[k] << " ";
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
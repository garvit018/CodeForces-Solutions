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
    ll n, m, k;
    cin >> n >> m >> k;
    vi arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vi diff(n - 1);
    for(int i = 0; i < n - 1; i++){
        diff[i] = arr[i + 1] - arr[i];
    }
    sort(all(diff));
    ll ans = k;
    for(int i = 0; i < n - k; i++){
        ans += diff[i];
    }
    cout << ans << endl; 
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
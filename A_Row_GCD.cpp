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
    ll n, m;
    cin >> n >> m;
    vi arr(n), brr(m);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }
    // ll mini = *min_element(all(arr));
    // TLE
    // for(int i = 0; i < m; i++){
    //     ll g = 0;
    //     for(int j = 0; j < n; j++){
    //         g = __gcd(g, arr[j] + brr[i]);
    //     }
    //     cout << g << " ";
    // }
    ll g = 0;
    for(int i = 1; i < n; i++){
        g = __gcd(g, abs(arr[i] - arr[0]));
    }
    for(int i = 0; i < m; i++){
        ll temp = g;
        temp = __gcd(g, brr[i] + arr[0]);
        cout << temp << " ";
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
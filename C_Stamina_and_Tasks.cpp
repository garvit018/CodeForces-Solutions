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

// double f(ll i, ll n, double s, vi& c, vi &p){
//     if(i >= n){
//         return 0;
//     }
//     double take = (s * c[i]) + f(i + 1, n, s * (1 - p[i] / 100.0), c, p);
//     double notTake = f(i + 1, n, s , c, p);
//     return max(take, notTake);
// }

// max till last subtask + max till n-1 .....

void solve()
{
    ll n;
    cin >> n;
    vi c(n), p(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> p[i];
    }
    // vvi dp(n + 1);
    // cout << fixed << setprecision(10) << f(0, n, 1.0, c, p) << endl;
    double dp = 0.0;
    for(int i = n - 1; i >= 0; i--){
        double s = 1.0 - p[i] / 100.0;
        double take = 1.0 * c[i] + s * dp;
        double notTake = dp;
        dp = max(take, notTake);
    }
    cout << fixed << setprecision(10) << dp << endl;
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
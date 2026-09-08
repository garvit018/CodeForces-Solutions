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
    ll a, b, c;
    cin >> a >> b >> c;
    ll d = min({a + b, b + c, c + a});
    if(d > max({a, b, c})){
        cout << max({a, b, c}) - min({a, b, c}) << endl;
        return;
    }
    ll e = d - min({a, b, c});
    if(a == b && b == c){
        cout << 0 << endl;
        return;
    }
    cout << e << endl;
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
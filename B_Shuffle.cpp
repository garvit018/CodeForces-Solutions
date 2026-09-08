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
    ll n, x, m;
    cin >> n >> x >> m;
    pi pp[m];
    for(int i = 0; i < m; i++){
        cin >> pp[i].first >> pp[i].second;
    }
    ll l = x, r = x;
    for(int i = 0; i < m; i++){
        if(pp[i].first <= r && pp[i].second >= l){
            l = min(pp[i].first, l);
            r = max(pp[i].second, r);
        }
    }
    cout << r - l + 1 << endl;
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
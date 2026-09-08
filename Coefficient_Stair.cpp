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
vi ans;
void rec(ll i, ll n, ll k){
    if(i == n){
        if(k % n == 0){
            ans.pb(k / n);
            for(int j = 0; j < n; j++){
                cout << ans[j] << " ";
            }
            cout << endl;
            ans.pop_back();
        }
        return;
    }
    for(int j = 0; j <= k / i; j++){
        ans.pb(j);
        rec(i + 1, n, k - (j * i));
        ans.pop_back();
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    rec(1, n, k);
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
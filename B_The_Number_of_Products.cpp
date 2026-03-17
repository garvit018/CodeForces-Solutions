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
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vi pos(n, 0), neg(n, 0);
    if(arr[0] > 0){
        pos[0] = 1;
    }
    else{
        neg[0] = 1;
    }
    for(int i = 1; i < n; i++){
        if(arr[i] > 0){
            pos[i] = pos[i - 1] + 1;
            neg[i] = neg[i - 1];
        }
        else{
            pos[i] = neg[i - 1];
            neg[i] = pos[i - 1] + 1;
        }
    }
    ll ansp = 0, ansn = 0;
    for (int i = 0; i < n; i++)
    {
        ansp += pos[i];
        ansn += neg[i];
    }
    cout << ansn << " " << ansp << endl;
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
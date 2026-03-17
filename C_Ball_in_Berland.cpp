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
valid pairs 
ans += other pairs (k-1) + rest boys (mp[arr[i]]-1) + rest girls (mp[brr[i]]-1) 
ans/2 -> each pair is considered twice 


2nd method 
kC2 - boysC2 - girlsC2
*/

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    vi arr(k), brr(k);
    mapii mpa, mpb;
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        mpa[--arr[i]]++;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> brr[i];
        mpb[--brr[i]]++;
    }
    if(k < 2){
        cout << 0 << endl;
        return;
    }
    // ll ans = 0;
    ll all = (k * (k - 1))/ 2;
    ll inv = 0;
    // for (int i = 0; i < k; i++){
    //     ans += (k - 1) - (mpa[arr[i]] - 1) - (mpb[brr[i]] - 1);
    // }
    for (auto it : mpa){
        inv += (it.second * (it.second - 1)) / 2;
    }
    for (auto it : mpb){
        inv += (it.second * (it.second - 1)) / 2;
    }
    cout << all - inv << endl;
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
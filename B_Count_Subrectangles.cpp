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

vi func(ll n, vi arr){
    vi ans(n + 1, 0);
    for(int i = 0; i < n;){
        while(i < n && arr[i] == 0){
            i++;
            continue;
        }
        ll j = i;
        while(j < n && arr[j] == 1){
            j++;
        }
        ll len = j - i;
        for(int k = 0; k <= len; k++){
            ans[k] += (len - k + 1); // uss size ki subarray kitni baar aa rhi (no of ways to place window of size k)
        }
        i = j;
    }
    return ans;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vi arr(n), brr(m);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++){
        cin >> brr[i];
    }
    vi cntA = func(n, arr);
    vi cntB = func(m, brr);
    ll ans = 0;
    for(int i = 1; i * i <= k; i++){
        if(k % i == 0){
            ll j = k / i;
            if(i <= n && j <= m){
                ans += (cntA[i] * cntB[j]);
            }
            if(i != j && i <= m && j <= n){
                ans += (cntA[j] * cntB[i]);
            }
        }
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
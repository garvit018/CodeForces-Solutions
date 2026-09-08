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

bool bs(ll mid, ll x, vi& arr, ll n){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(mid >= arr[i]){
            sum += (mid - arr[i]);
        }
    }
    return sum <= x;
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // if(n == 1){
    //     cout << max(arr[0], x) + 1 << endl;
    //     return;
    // }
    ll low = 0, high = 2e9;
    ll ans = 0;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(bs(mid, x, arr, n)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << ans << endl;
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
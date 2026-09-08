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

bool check(ll mid, vi& arr, ll k){
    ll n = arr.size();
    for(int i = 0; i < n; i++){
        ll cnt = 0;
        ll y = mid;
        for(int j = i; j < n; j++){
            if(arr[j] >= y){
                break;
            }
            if(j == n - 1){
                return false;
            }
            cnt += (y - arr[j]);
            y--;
        }
        if(cnt <= k){
            return true;
        }
    }
    return false;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll low = 0;
    ll high = *max_element(all(arr)) + k;
    ll ans = 0;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(check(mid, arr, k)){
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
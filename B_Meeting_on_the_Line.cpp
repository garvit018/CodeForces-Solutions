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
t[i] + |arr[i] - arr[0]| <= mid
|arr[i] - arr[0]| <= mid - t[i]
-(mid - t[i]) <= arr[i] - arr[0] <= mid - t[i]
arr[i] - (mid - t[i]) <= arr[0] <= arr[i] + (mid - t[i])
*/

bool bs(double mid, vi& arr, vi& t, double &pos){
    ll n = arr.size();
    double l = -1e9, r = 1e9;
    for(int i = 0; i < n; i++){
        double diff = mid - t[i];
        double left = arr[i] - diff;
        double right = arr[i] + diff;
        l = max(left, l);
        r = min(r, right);
    }
    if(l <= r){
        pos = (r + l) / 2.0;
        return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    vi arr(n), t(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    double low = 0, high = 1e9;
    double ans = 0;
    while(high - low >= 1e-7){
        double mid = (low + high) / 2.0;
        if(bs(mid, arr, t, ans)){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
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
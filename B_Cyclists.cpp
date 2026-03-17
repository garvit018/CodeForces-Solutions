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
    ll n, k, m, p;
    cin >> n >> k >> p >> m;
    p--;
    vi arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(n == k){
        cout << m / arr[p] << endl;
        return;
    }
    ll cnt = 0;
    while(m >= 0){
        if(p <= k - 1){
            if(arr[p] > m){
                break;
            }
            m -= arr[p];
            cnt++;
            ll ele = arr[p];
            arr.erase(arr.begin() + p);
            arr.pb(ele);
            p = n - 1;
        }
        else{
            auto idx = min_element(arr.begin(), arr.begin() + k) - arr.begin();
            if(arr[idx] > m){
                break;
            }
            m -= arr[idx];
            p--;
            ll ele = arr[idx];
            arr.erase(arr.begin() + idx);
            arr.pb(ele); 
        }
    }
    cout << cnt << endl;
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
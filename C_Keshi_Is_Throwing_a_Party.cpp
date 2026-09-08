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

bool check(ll mid, vi &arr, vi &brr){
    ll n = arr.size();
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(mid - cnt - 1 <= arr[i] && brr[i] >= cnt){
            cnt++;
        }
        if(cnt == mid){
            return true;
        }
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    vi arr(n), brr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i] >> brr[i];
    }
    // ll cnt = 1;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if((arr[i] > arr[j]) && (brr[i] < brr[j])){
    //             cnt++;
    //         }
    //     }
    // }
    ll ans = 0;
    ll low = 1, high = n;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(check(mid, arr, brr)){
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
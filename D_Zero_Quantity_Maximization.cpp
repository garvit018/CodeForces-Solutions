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
    ll n;
    cin >> n;
    vi arr(n), brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    map<long double, ll> mp;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0 && brr[i] == 0){
            cnt++;
        }
        else if(arr[i] == 0){
            continue;
        }
        else{
            mp[(long double)(-brr[i]) / arr[i]]++;
        }
        // else if(abs(arr[i]) > abs(brr[i])){
        //     mp[double(arr[i]) / brr[i]]++;
        // }
        // else{
        //     mp[double(brr[i]) / arr[i]]++;
        // }
    }
    ll maxi = 0;
    for(auto it : mp){
        maxi = max(it.second, maxi);
    }
    cout << cnt + maxi << endl;
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
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
    vi arr(n);
    // mapii mp;
    ll sum = 0;
    ll maxi = arr[0];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // mp[arr[i]]++;
        sum += arr[i];
        maxi = max(arr[i], maxi);
    }
    if(sum % 2 == 0 && (sum - maxi) >= maxi){
        yes;
        return;
    }
    no;





    // for(auto it: mp){
    //     if(it.second > 1 && (n - it.second % 2) != 0){
    //         no;
    //         return;
    //     }
    // }
    // yes;
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
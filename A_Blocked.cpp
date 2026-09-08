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
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n";
#define no cout << "NO\n";

/*

*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    mapii mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for(auto it : mp){
        if(it.second > 1){
            cout << -1 << endl;
            return;
        }
    }
    sort(rall(arr));
    for(auto it : arr){
        cout << it << ' ';
    }
    cout << endl;
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
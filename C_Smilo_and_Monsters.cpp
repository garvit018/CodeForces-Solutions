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
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    vi pref(n, 0);
    pref[0] = arr[0];
    for(int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + arr[i];
    }
    ll cnt = pref[n - 1] % 2 == 0 ? pref[n - 1] / 2 : pref[n - 1] / 2 + 1 ;
    ll k = 0;
    for(int i = 0; i < n; i++){
        if(pref[i] > cnt){
            k++;
        }
    }
    cout << k + cnt << endl;
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
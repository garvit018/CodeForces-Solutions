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
    for(int i = 0; i < n; i++){
        ll sum = 0;
        vi pref(n), suff(n), w(n);
        for(int j = 0; j < n; j++){
            w[j] = arr[(i + j) % n];
        }
        // for(auto it : w){
        //     cout << it << " ";
        // }
        pref[0] = w[0];
        for(int j = 1; j < n; j++){
            pref[j] = max(pref[j - 1], w[j]);
        }
        suff[n - 1] = w[n - 1];
        for(int j = n - 2; j >= 0; j--){
            suff[j] = max(suff[j + 1], w[j]);
        }
        for(int j = 1; j < n; j++){
            sum += min(pref[j - 1], suff[j]);
        }
        cout << sum << " ";
    }
    // cout << endl << endl;
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
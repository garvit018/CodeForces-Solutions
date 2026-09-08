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
    ll n, m;
    cin >> n >> m;
    vi arr(n), brr(m);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }
    if(n < 2 * m){
        no;
        return;
    }
    sort(all(arr));
    sort(all(brr));
    ll i = 0;
    ll cnt = 0;
    while(i < m && arr[i] <= brr[i] && brr[i] <= arr[n - m + i]){
        i++;
    }
    cout << (i < m ? "NO" : "YES") << endl;
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
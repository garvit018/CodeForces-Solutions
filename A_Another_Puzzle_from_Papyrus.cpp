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
    ll n, c;
    cin >> n >> c;
    vi arr(n), brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    ll ok = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(brr[i] > arr[i]){
            ok = 1;
            break;
        }
    }
    sort(all(arr));
    sort(all(brr));
    for(int i = 0; i < n; i++){
        if(arr[i] > brr[i]){
            ans += (arr[i] - brr[i]);
        }
        else if(arr[i] < brr[i]){
            cout << -1 << endl;
            return;
        }
    }
    if(ok){
        ans += c;
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
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
    ll n, x;
    cin >> n >> x;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    ll sum = 0, ans = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        ll need = x - sum;
        if(need < 0){
            break;
        }
        ans += (1 + need / (i + 1));
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
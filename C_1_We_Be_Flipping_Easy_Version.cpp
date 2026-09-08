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
    ll neg = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < 0){
            neg++;
        }
    }
    if(neg == n){
        cout << 0 << endl;
        return;
    }
    ll ok = 0;
    vi ans;
    for(int i = n - 1; i >= 0; i--){
        if(ok == 1){
            arr[i] = -arr[i];
        }
        if(arr[i] > 0){
            ok = !ok;
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << endl;
    for(auto it : ans){
        cout << it << " ";
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
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
    vi pref1(n, 0), pref2(n, 0);
    pref1[0] = (arr[0] > 1);
    for(int i = 1; i < n; i++){
        pref1[i] = pref1[i - 1] + (arr[i] > 1);
    }
    pref2[0] = (arr[0] > 2);
    for(int i = 1; i < n; i++){
        pref2[i] = pref2[i - 1] + (arr[i] > 2);
    }
    vi mid(n, 0);
    for(int i = 0; i < n; i++){
        mid[i] = 2 * pref2[i] - i;
    }
    bool ok = false;
    ll mini = mid[n - 2];
    for(int i = n - 3; i >= 0; i--){
        if(2 * pref1[i] <= i + 1){
            if(mini <= mid[i]){
                ok = true;
                break;
            }
        }
        mini = min(mini, mid[i]);
    }
    if(ok){
        yes;
    }
    else{
        no;
    }
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
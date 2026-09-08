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
    vi zero;
    zero.pb(-1);
    ll l = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zero.pb(i);
        }
    }
    zero.pb(n);
    ll ans = INT_MIN;
    for(int i = 0; i < zero.size() - 1; i++){
        if(zero[i + 1] - zero[i] == 1){
            continue;
        }
        ll pro = 1;
        ll sig = 1; // sign store
        for(int j = zero[i] + 1; j < zero[i + 1]; j++){
            pro += (abs(arr[j]) == 2);
            if(arr[j] < 0){
                sig = -sig;
            }
            if(sig * pro >= ans){
                ans = max(ans, sig * pro);
                l = zero[i] + 1;
                r = j;
            }
        }
        pro = 1;
        sig = 1;
        for(int j = zero[i + 1] - 1; j > zero[i]; j--){
            pro += (abs(arr[j]) == 2);
            if(arr[j] < 0){
                sig = -sig;
            }
            if(sig * pro >= ans){
                ans = max(ans, sig * pro);
                l = j;
                r = zero[i + 1] - 1;
            }
        }
    }
    if(ans <= 0){
        cout << n << " " << 0 << endl;
        return;
    }
    cout << l << " " << n - r - 1 << endl;
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
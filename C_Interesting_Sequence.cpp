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

ll bs(ll mid, ll n){
    ll aand = 0;
    for(int i = 60; i >= 0; i--){
        if((n & (1LL << i)) == (mid & (1LL << i))){ // check kr rhe ki same bit set hai ya nhi
            aand |= (n & (1LL << i));
        }
        else{
            break;
        }
    }
    return aand;
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    if(n == x){
        cout << n << endl;
        return;
    }
    ll ans = -1;
    ll low = n, high = 2e18;
    while(low <= high){
        ll mid = low + (high - low) / 2;
        if(bs(mid, n) <= x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(ans != -1 && bs(ans, n) != x){
        ans = -1;
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
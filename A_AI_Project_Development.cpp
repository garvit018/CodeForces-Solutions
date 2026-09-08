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
    ll n, x, y, z;
    cin >> n >> x >> y >> z;
    ll temp = n;
    ll cnt = 0;
    while(temp > 0){
        temp -= (x + y);
        cnt++;
    }
    ll t = n;
    ll cnt1 = 0;
    while(t > 0){
        cnt1++;
        if(cnt1 <= z){
            t -= x;
        }
        else{
            t -= (x + (10 * y));
        }
    }
    cout << min(cnt, cnt1) << endl;
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
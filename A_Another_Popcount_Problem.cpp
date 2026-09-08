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

bool powoftwo(ll n){
    return ((n & (n - 1)) == 0);
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vi arr(n);
    ll sum = 0;
    ll i = 0;
    ll ans = 1;
    while(i < n && sum < n){
        arr[i] = i + 1;
        sum += arr[i];
        i++;
    }
    ll a = arr.size();
    for(int j = a - 1; j >= 0; j--){
        if(powoftwo(arr[j])){
            ans = arr[j] - 1;
        }
    }
    cout << __builtin_popcount(ans) * k << endl;
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
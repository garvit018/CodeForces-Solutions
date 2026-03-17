#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vs vector<string>
#define mapii map<ll, ll>
#define vpi vector<pair<ll,ll>>
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

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
    // vi a,b;
    ll cnt=0;
    // a.pb(LLONG_MAX);
    // b.pb(LLONG_MAX);
    ll a=LLONG_MAX,b=LLONG_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=a){
            a=arr[i];
        }
        else if(arr[i]<=b){
            b=arr[i];
        }
        else{
            a=b;
            b=arr[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
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
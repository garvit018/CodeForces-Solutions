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
    ll n, k;
    cin >> n >> k;
    vi arr(n);
    vi bit(32,0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        for(int j=0;j<32;j++){
            if(arr[i] & (1<<j)){
                bit[j]++;
            }
        }
    }
    ll ans=0;
    for(int i=30;i>=0;i--){
        ll cnt=n-bit[i];
        if(cnt<=k){
            ans|=(1<<i);
            k-=cnt;
        }
    }
    cout<<ans<<endl;
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
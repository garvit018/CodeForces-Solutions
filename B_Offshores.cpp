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

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

/*

*/

void solve()
{
    ll n,x,y;
    cin >> n >> x >> y;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // ll idx=-1;
    // ll j=-1;
    // vi pref(n);
    // for(int i=0;i<n;i++){
    //     pref[i]=arr[i]%x;
    // }
    // ll maxi=pref[0];
    // for(int i=0;i<n;i++){
    //     if(pref[i]>maxi){
    //         maxi=pref[i];
    //         idx=i;
    //     }
    // }
    // maxi=pref[0];
    // for(int i=0;i<n;i++){
    //     if(pref[i]<maxi){
    //         maxi=pref[i];
    //         j=i;
    //     }
    // }
    ll sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i]/x)*y;
    }
    for (int i = 0; i < n; i++)
    {
        ans=max(ans,sum+arr[i]-(arr[i]/x)*y);
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
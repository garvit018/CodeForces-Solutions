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
    cin>>n;
    vi arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    vi pref(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        pref[i]=pref[i-1]+(arr[i]<i);
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout<<pref[i]<<" ";
    // }
    // cout<<endl;
    
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>0 and arr[i]<i){
            ans+=pref[arr[i]-1];
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
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
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     ll l=1,r=i+1;
    //     while(l<=r){
    //         ll mid=(l+r)/2;
    //         if(arr[i-mid+1]>=mid){
    //             l=mid+1;
    //         }
    //         else{
    //             r=mid-1;
    //         }
    //     }
    //     cout<<r<<" ";
    // }
    // cout<<endl;

    queue<ll>qt;
    ll ans=0;
    for(int i=0;i<n;i++){
        qt.push(arr[i]);
        if(ans+1>qt.front()){
            qt.pop();
        }
        else{
            ans++;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
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
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
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n";
#define no cout << "NO\n";

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

/*

*/

void solve()
{
    ll n, m;
    cin >> n >> m;
    vi arr(n), brr(n);
    arr[0]=1;
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    sort(all(arr));
    sort(all(brr));
    ll ans=0;
    // ll low=0,high=n;
    // auto bs=[&](ll mid,vi arr1,vi brr1){
    //     for(int i=0;i<mid;i++){
    //         arr1.pop_back();
    //         brr1.pop_back();
    //     }
    //     reverse(all(brr1));
    //     for(int i=0;i<arr1.size();i++){
    //         if(arr1[i]>=brr1[i]){
    //             return false;
    //         }
    //     }
    //     return true;
    // };
    // while(low<=high){
    //     ll mid=(high+low)/2;
    //     if(bs(mid,arr,brr)){
    //         ans=mid;
    //         high=mid-1;
    //     }
    //     else{
    //         low=mid+1;
    //     }
    // }
    for(int i=0,j=0;i<n;i++){
        if(arr[j]>=brr[i]){
            ans++;
        }
        else{
            j++;
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
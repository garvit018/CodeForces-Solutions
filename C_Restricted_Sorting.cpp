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
initially, k=infinity
if(a[i] is not in its correct pos){
    k=min(k,max(a[i]-min,max-a[i]))
}
*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
/*
    if(is_sorted(all(arr))){
        cout<<-1<<endl;
        return;
    }
    vi brr=arr;
    sort(all(arr));
    ll maxi=*max_element(all(arr));
    ll mini=*min_element(all(arr));
    // ll maxi=0;
    // for(int i=0;i<n;i++){
    //     maxi=max(maxi,abs(brr[i]-arr[i]));
    // }
    // cout<<maxi<<endl;
    ll low=0,high=1e9;
    auto bs=[&](ll mid){
        for(int i=0;i<n;i++){
            if(brr[i]>(maxi-mid) and brr[i]<(mini+mid)){
                if(brr[i]!=arr[i]){
                    return false;
                }
            }
        }
        return true;
    };
    ll ans=0;
    while(low<=high){
        ll mid=(low+high)/2;
        if(bs(mid)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
*/
    ll ans=INFLL;
    vi brr=arr;
    sort(all(arr));
    ll maxi=*max_element(all(arr));
    ll mini=*min_element(all(arr));
    for(int i=0;i<n;i++){
        if(arr[i]!=brr[i]){
            ll m=max(maxi-arr[i],arr[i]-mini);
            ans=min(ans,m);
        }
    }
    if(ans==INFLL){
        cout<<-1<<endl;
        return;
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
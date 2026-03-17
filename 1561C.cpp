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
    vvi arr(n);
    vpi pp;
    for (int i = 0; i < n; i++)
    {
        ll maxi=INT_MIN;
        ll k;
        cin>>k;
        arr[i].resize(k);
        for (int j = 0; j < k; j++)
        {
            cin>>arr[i][j];
            maxi=max(maxi,arr[i][j]-j);
        }
        pp.push_back({maxi+1,k});
    }
    sort(all(pp));
    // for(auto it:pp){
    //     cout<<it.first<<" "<<it.second;
    //     cout<<endl;
    // }
    // cout<<endl;
    if(n==1){
        cout<<pp[0].first<<endl;
        return;
    }
    auto func=[&](ll x){
        for (int i = 0; i < n; i++)
        {
            if(pp[i].first<=x){
                x+=pp[i].second;
            }
            else{
                return false;
            }
        }
        return true;
    };

    ll low=1,high=1e18;
    ll ans=0;
    while(low<=high){
        ll mid=(low+high)/2;
        if(func(mid)){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
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
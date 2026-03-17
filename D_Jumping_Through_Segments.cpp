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
    vi l(n),r(n);
    for (int i = 0; i < n; i++)
    {
        cin>>l[i]>>r[i];
    }
    auto bs=[&](ll mid){
        ll lpos=0;
        ll rpos=0;
        for(int i=0;i<n;i++){
            lpos=max(lpos-mid,l[i]);
            rpos=min(rpos+mid,r[i]);
            if(lpos>rpos){
                return false;
            }
        }
        return true;
    };
    ll low=0,high=1e9;
    ll ans=0;
    while(low<=high){
        ll mid=(low+high)/2;
        if(bs(mid)){
            ans=mid;
            high=mid-1;
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
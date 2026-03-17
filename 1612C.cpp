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
    ll k,x;
    cin>>k>>x;
    ll low=1,high=2*k-1;
    ll ans=0;
    ll total=k*k;
    while(low<=high){
        ll mid=(low+high)/2;
        ll req=0;
        if(mid<=k){
            req=(mid*(mid-1))/2;
        }
        else{
            ll diff=mid-k;
            ll val=k-diff;
            req=total-(val*(val+1))/2;
        }

        if(req>=x){
            high=mid-1;
        }
        else{
            ans=mid;
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
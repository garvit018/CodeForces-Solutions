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
    ll n,m;
    cin>>n>>m;
    vi arr(m),hash(n,0);
    for(int i=0;i<m;i++){
        cin>>arr[i];
        arr[i]--;
        hash[arr[i]]++;
    }
    if(n>m){
        cout<<1<<endl;
        return;
    }
    auto bs=[&](ll mid){
        ll sum=0;
        for(int i=0;i<n;i++){
            if(mid<hash[i]){
                sum+=mid;
            }
            else{
                sum+=(hash[i]+(mid-hash[i])/2);
            }
        }
        return sum>=m;
    };
    ll low=0,high=2*m;
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
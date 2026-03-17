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
    string s;
    cin>>s;
    ll n=s.size();
    if(n==1){
        cout<<0<<endl;
        return;
    }
    ll sum=0;
    vi res;
    for(int i=0;i<n;i++){
        sum+=(s[i]-'0');
        res.pb(s[i]-'0');
    }
    if(sum<=9){
        cout<<0<<endl;
        return;
    }
    sort(all(res));
    // for(auto it:res){
    //     cout<<it<<" ";
    // }
    ll ans=0;
    for(int i=n-1;i>=0;i--){
        if(sum<9){
            break;
        }
        sum-=res[i];
        ans++;
    }
    // cout<<endl;
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
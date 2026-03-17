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
    vpi pp(n);
    for (int i = 0; i < n; i++)
    {
        cin>>pp[i].first;
        pp[i].second=i;
    }
    sort(all(pp));
    vi pref(n);
    pref[0]=pp[0].first;
    for (int i = 1; i < n; i++)
    {
        pref[i]=pref[i-1]+pp[i].first;
    }    
    vi ans(n);
    ans[pp[n-1].second]=n-1;
    for(int i=n-2;i>=0;i--){
        ans[pp[i].second]=i;
        if(pref[i]>=pp[i+1].first){
            ans[pp[i].second]=ans[pp[i+1].second];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<' ';
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
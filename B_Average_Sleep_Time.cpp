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
    ll n,k;
    cin>>n>>k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double sum=0,t=0;
    for (int i = 0; i < n; i++)
    {
        if(i<k){
            t+=arr[i];
            continue;
        }
        sum+=t;
        t-=arr[i-k];
        t+=arr[i];
    }
    // cout<<sum<<" "<<t<<endl;
    sum+=t;
    cout<<setprecision(10)<<(double)sum/(n-k+1)<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
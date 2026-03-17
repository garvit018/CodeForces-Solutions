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
    ll sum=0,cnt=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]<=0){
            cnt++;
        }
    }
    if(cnt==n){
        no;
        return;
    }
    ll ans=0,s=0;
    for(int i=0;i<n-1;i++){
        s+=arr[i];
        if(s<=0){
            s=0;
        }
        ans=max(ans,s);
    }
    if(ans>sum){
        no;
        return;
    }
    s=0;
    for (int i = 1; i < n; i++)
    {
        s+=arr[i];
        if(s<=0){
            s=0;
        }
        ans=max(s,ans);
    }
    if(ans>=sum){
        no;\
        return;
    }
    yes;
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
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
    ll n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    ll diff=arr[0];
    vi dif;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            dif.pb(arr[j]-arr[i]);
        }
    }
    sort(all(dif));
    if(k==1){
        for(int i=0;i<n-1;i++){
            diff=min(arr[i+1]-arr[i],diff);
        }
        cout<<diff<<endl;
    }
    else if(k==2){
        diff=min(dif[0],diff);
        for(int i=0;i<n;i++){
            auto it=lower_bound(dif.begin(),dif.end(),arr[i]);
            if(it!=dif.end()){
                diff=min(diff,abs(*it-arr[i]));
            }
            if(it!=dif.begin()){
                it--;
                diff=min(diff,abs(*it-arr[i]));
            }
        }
        cout<<diff<<endl;
    }
    else if(k>=3){
        cout<<0<<endl;
    }
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
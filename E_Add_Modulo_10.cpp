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
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool ok=false;
    for(int i=0;i<n;i++){
        if(arr[i]%5==0){
            ok=true;
            arr[i]+=(arr[i]%10);
        }
    }
    if(ok){
        if(count(all(arr),arr[0])==n){
            yes;
        }
        else{
            no;
        }
        return;
    }
    for(int i=0;i<n;i++){
        while(arr[i]%10!=2){
            arr[i]+=(arr[i]%10);
        }
        arr[i]%=20;
    }
    if(count(all(arr),arr[0])==n){
        yes;
    }
    else{
        no;
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
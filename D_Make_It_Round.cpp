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
    ll cnt2=0,cnt5=0;
    ll temp=n;
    while(temp>0 && temp%2==0){
        temp/=2;
        cnt2++;
    }
    while(temp>0 && temp%5==0){
        temp/=5;
        cnt5++;
    }
    ll k=1;
    while(cnt2!=cnt5){
        if(cnt2<cnt5 and k*2<=m){
            k*=2;
            cnt2++;
        }
        else if(cnt5<cnt2 and k*5<=m){
            cnt5++;
            k*=5;
        }
        else{
            break;
        }
    }
    while(k*10<=m){
        k*=10;
    }
    if(k==1){
        cout<<n*m<<endl;
    }
    else{
        cout<<n*(m-m%k)<<endl;
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
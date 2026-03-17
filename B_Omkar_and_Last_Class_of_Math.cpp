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
    if(n&1){
        bool ok=false;
        for (int i = 2; i*i <= n; i++)
        {
            if(n%i==0){
                cout<<n/i<<" "<<n-n/i<<endl;
                ok=true;
                break;
            }
        }
        if(!ok){
            cout<<1<<" "<<n-1<<endl;
        }
    }
    else{
        cout<<n/2<<" "<<n/2<<endl;
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
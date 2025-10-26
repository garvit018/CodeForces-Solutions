#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vs vector<string>
#define umapii unordered_map<int, int>
#define vpi vector<pair<int,int>>
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

// bool isPrime(ll n) {
//     if (n < 2) return false;
//     if (n < 4) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for (ll i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }

// ll gcd(ll a, ll b) {
//     return b == 0 ? a : gcd(b, a % b);
// }

// ll lcm(ll a, ll b) {
//     return (a / gcd(a, b)) * b;
// }

/*

*/

void solve()
{
    ll n;
    cin>>n;
    vi arr(n),brr(n);
    vi vis(n,0),ans;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]>>brr[i];
    }
    
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                continue;
            }
            if(arr[j]<=arr[i] and brr[i]<=brr[j]){
                vis[i]=1;
            }
        }
        if(!vis[i]){
            ans.pb(i+1);
        }
    }
    cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
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
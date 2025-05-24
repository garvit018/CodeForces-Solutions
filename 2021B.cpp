#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vs vector<string>
#define umapii unordered_map<int, int>
#define vpi vector<pair<int, int>>
#define endl '\n'
#define pb push_back
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
FREQ STORE KRO
RUN LOOP TILL 0 NHI AA JATA KOI NUMBER KE LIYE
IF MP[i]>1 TOH MP[i+x]+=(MP[i]-1)
6 2
1 3 4 1 0 2
MP[1+2]+=(MP[1]-1) => MP[3]=2
MP[3+2]+=(MP[3]-1) => MP[5]=1
*/

void solve()
{
    ll n, x;
    cin >> n >> x;
    vi arr(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    // sort(arr.begin(), arr.end());
    ll i = 0;
    while (mp[i])
    {
        mp[i + x] += (mp[i] - 1);
        i++;
    }
    cout << i << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
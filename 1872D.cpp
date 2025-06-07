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

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

/*
XXX-> n+(n-1)+(n-2)+(n-(xxx-1)) largest values
YYY -> 1+2+3+....(yyy) smallest values
*/

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll xxx = n / x;
    ll yyy = n / y;
    ll tot = (n * (n + 1)) / 2;
    ll hcf = gcd(x, y);
    ll common = n / lcm(x, y);
    xxx -= common;
    yyy -= common;
    ll sum = (tot - (n - xxx) * (n - xxx + 1) / 2) - (yyy * (yyy + 1) / 2);
    cout << sum << endl;
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
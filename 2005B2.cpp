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

*/

void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    vi arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    while (q--)
    {
        ll x;
        cin >> x;
        if (x < arr[0])
        {
            cout << arr[0] - 1 << endl;
        }
        else if (x > arr[m - 1])
        {
            cout << n - arr[m - 1] << endl;
        }
        else
        {
            auto idx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
            cout << (arr[idx] - arr[idx - 1]) / 2 << endl;
        }
    }
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
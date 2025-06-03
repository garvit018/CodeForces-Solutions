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
    cin >> n;
    vvi arr(n, vi(n));
    ll temp = (n * n) - 1;
    ll t = 0, b = n - 1;
    ll l = 0, r = n - 1;
    while (t <= b && l <= r)
    {
        for (int i = l; i <= r; i++)
        {
            arr[t][i] = temp;
            temp--;
        }
        t++;
        for (int i = t; i <= b; i++)
        {
            arr[i][r] = temp;
            temp--;
        }
        r--;
        for (int i = r; i >= l; i--)
        {
            arr[b][i] = temp;
            temp--;
        }
        b--;
        for (int i = b; i >= t; i--)
        {
            arr[i][l] = temp;
            temp--;
        }
        l++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
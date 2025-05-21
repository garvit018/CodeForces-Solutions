#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define umap unordered_map
#define uset unordered_set
#define endl '\n'
#define pb push_back
#define yes cout << "YES\n";
#define no cout << "NO\n";

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

// ll power(ll a, ll b, ll mod = MOD) {
//     ll res = 1;
//     while (b > 0) {
//         if (b & 1) res = (res * a) % mod;
//         a = (a * a) % mod;
//         b >>= 1;
//     }
//     return res;
// }

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

// bool isPalindrome(const string &s, ll l, ll r) {
//     while (l < r) {
//         if (s[l] != s[r]) return false;
//         l++, r--;
//     }
//     return true;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        vi arr(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll ans = sqrt(sum);
        if (ans * ans == sum)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}
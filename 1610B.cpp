#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vs vector<string>
#define umapii unordered_map<int, int>
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

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n < 3)
    {
        yes;
        return;
    }

    auto kal = [&](int a) -> bool
    {
        vi brr;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != a)
            {
                brr.pb(arr[i]);
            }
        }
        for (int i = 0; i < brr.size(); i++)
        {
            if (brr[i] != brr[brr.size() - i - 1])
            {
                return false;
            }
        }
        return true;
    };

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = kal(arr[i]) || kal(arr[n - 1 - i]);
            break;
        }
        else
        {
            flag = true;
        }
    }
    if (flag)
    {
        yes;
    }
    else
    {
        no;
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
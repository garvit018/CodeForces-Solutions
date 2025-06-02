<<<<<<< HEAD
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

/*
PEHELE SE MAX + DUSRE SE MAX + TEESRE SE MAX (ALL 3 DIFF)
*/

void solve()
{
    ll n;
    cin >> n;
    vpi arr, brr, crr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.pb({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        brr.pb({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        crr.pb({x, i});
    }
    sort(arr.rbegin(), arr.rend());
    sort(brr.rbegin(), brr.rend());
    sort(crr.rbegin(), crr.rend());
    ll ans = 0, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = arr[i].first;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i].second != brr[j].second)
            {
                sum += brr[j].first;
                for (int k = 0; k < 3; k++)
                {
                    if (crr[k].second != brr[j].second && arr[i].second != crr[k].second)
                    {
                        sum += crr[k].first;
                        ans = max(ans, sum);
                        sum -= crr[k].first;
                    }
                }
                sum -= brr[j].first;
            }
        }
    }
    cout << ans << endl;
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
=======
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

/*
PEHELE SE MAX + DUSRE SE MAX + TEESRE SE MAX (ALL 3 DIFF)
*/

void solve()
{
    ll n;
    cin >> n;
    vpi arr, brr, crr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.pb({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        brr.pb({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        crr.pb({x, i});
    }
    sort(arr.rbegin(), arr.rend());
    sort(brr.rbegin(), brr.rend());
    sort(crr.rbegin(), crr.rend());
    ll ans = 0, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = arr[i].first;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i].second != brr[j].second)
            {
                sum += brr[j].first;
                for (int k = 0; k < 3; k++)
                {
                    if (crr[k].second != brr[j].second && arr[i].second != crr[k].second)
                    {
                        sum += crr[k].first;
                        ans = max(ans, sum);
                        sum -= crr[k].first;
                    }
                }
                sum -= brr[j].first;
            }
        }
    }
    cout << ans << endl;
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
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
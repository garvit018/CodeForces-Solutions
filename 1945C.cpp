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
101
PREF -> [0,1,1]
SUFF -> [1,1,2]
PREF[i]>CEIL(i/2) AND SUFF[i]>CEIL((n-i)/2) STORE IDX
idx=2
*/

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    vi pref(n, 0), suff(n, 0);
    if (s[0] == '0')
    {
        pref[0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0')
        {
            pref[i] = pref[i - 1] + 1;
        }
        else
        {
            pref[i] = pref[i - 1];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << pref[i] << " ";
    // }
    // cout << endl;

    if (s[0] == '1')
    {
        suff[n - 1] = 1;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            suff[i] = suff[i + 1] + 1;
        }
        else
        {
            suff[i] = suff[i + 1];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << suff[i] << " ";
    // }
    // cout << endl;
    ll idx = 0;
    for (int i = 1; i <= n; i++)
    {
        ll cnt0 = pref[i - 1];
        ll cnt1 = suff[i - 1];
        if (cnt0 >= ceil((double)i / 2) && cnt1 >= ceil((double)(n - i) / 2))
        {
            if (abs((double)n / 2 - i) < abs((double)n / 2))
            {
                idx = i;
            }
        }
    }
    cout << idx << endl;
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
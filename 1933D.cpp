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
MINIMUM ELE -> 1 TIMES -> YES
MINIMUM ELE -> >1 TIMES -> arr[i]%mini !=0 -> YES
*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mini = *min_element(arr.begin(), arr.end());
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mini)
        {
            cnt++;
        }
    }
    if (cnt == 1)
    {
        yes;
        return;
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % mini != 0)
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
MINIMUM ELE -> 1 TIMES -> YES
MINIMUM ELE -> >1 TIMES -> arr[i]%mini !=0 -> YES
*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mini = *min_element(arr.begin(), arr.end());
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mini)
        {
            cnt++;
        }
    }
    if (cnt == 1)
    {
        yes;
        return;
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % mini != 0)
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
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
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
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vi ad(3, 0);
    vvi triples;
    for (int i = 0; i < n - 2; i++)
    {
        ad[0] = arr[i];
        ad[1] = arr[i + 1];
        ad[2] = arr[i + 2];
        triples.push_back(ad);
    }
    ll ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            ll cnt = 0;
            if (triples[i][0] != triples[j][0])
            {
                cnt++;
            }
            if (triples[i][1] != triples[j][1])
            {
                cnt++;
            }
            if (triples[i][2] != triples[j][2])
            {
                cnt++;
            }
            if (cnt == 1)
            {
                ans++;
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
}
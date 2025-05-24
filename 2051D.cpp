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
X<=TOTAL_SUM-ARR[i]-ARR[j]<=Y
TOTAL_SUM-Y<=ARR[i]+ARR[j]<=TOTAL_SUM-X -> SATISFY
*/

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vi arr(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];
        auto high = upper_bound(arr.begin() + i + 1, arr.end(), sum - x);
        auto low = lower_bound(arr.begin() + i + 1, arr.end(), sum - y);
        cnt += (high - low);
        sum += arr[i];
    }
    cout << cnt << endl;
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
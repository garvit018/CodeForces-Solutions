<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int64_t>
#define umap unordered_map
#define uset unordered_set
#define endl '\n'
#define pb push_back

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if (k == 1 || k == n)
    {
        cout << -1 << endl;
        return;
    }
    if (k % 2 == 0)
    {
        cout << 3 << endl;
        cout << 1 << " " << k << " " << k + 1 << endl;
        return;
    }
    cout << 5 << endl;
    cout << 1 << " " << 2 << " " << k << " " << k + 1 << " " << k + 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt;
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
#define vi vector<int64_t>
#define umap unordered_map
#define uset unordered_set
#define endl '\n'
#define pb push_back

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if (k == 1 || k == n)
    {
        cout << -1 << endl;
        return;
    }
    if (k % 2 == 0)
    {
        cout << 3 << endl;
        cout << 1 << " " << k << " " << k + 1 << endl;
        return;
    }
    cout << 5 << endl;
    cout << 1 << " " << 2 << " " << k << " " << k + 1 << " " << k + 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
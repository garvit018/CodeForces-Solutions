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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll bade = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (q >= arr[i])
            {
                bade++;
                ans += max(0LL, bade - k + 1);
            }
            else
            {
                bade = 0;
            }
        }
        cout << ans << endl;
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll bade = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (q >= arr[i])
            {
                bade++;
                ans += max(0LL, bade - k + 1);
            }
            else
            {
                bade = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
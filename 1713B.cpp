#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int64_t>
#define umap unordered_map
#define uset unordered_set
#define pb push_back

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, maxi = 0;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        ll ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            ans += max(0LL, arr[i] - arr[i - 1]);
        }
        if (maxi < ans)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
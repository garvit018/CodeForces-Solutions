#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll diff = r - l + 1;
        vector<ll> lft, rt;
        for (ll i = 0; i < r; i++)
        {
            lft.push_back(arr[i]);
        }
        for (ll i = l - 1; i < n; i++)
        {
            rt.push_back(arr[i]);
        }
        sort(lft.begin(), lft.end());
        sort(rt.begin(), rt.end());
        ll lsum = 0, rsum = 0;
        for (ll i = 0; i < diff; i++)
        {
            lsum += lft[i];
            rsum += rt[i];
        }
        cout << min(lsum, rsum) << endl;
    }
    return 0;
}
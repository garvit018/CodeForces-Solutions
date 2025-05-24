#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll sum = 0, mouse = 0;
        for (ll i = k - 1; i >= 0; i--)
        {
            sum += (n - arr[i]);
            if (sum < n)
            {
                mouse++;
            }
            else
            {
                break;
            }
        }
        cout << mouse << endl;
    }
    return 0;
}
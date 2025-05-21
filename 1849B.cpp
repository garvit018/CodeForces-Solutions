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
        vector<ll> arr(n);
        vector<pair<ll, ll>> vec(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            vec[i].first = -(arr[i] % k == 0 ? k : arr[i] % k);
            vec[i].second = i + 1;
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < n; i++)
        {
            cout << vec[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}
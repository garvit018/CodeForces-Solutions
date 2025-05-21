#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll sum = 0, count = 0;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1)
                count++;
        }

        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        sum -= n;
        
        if (sum >= count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

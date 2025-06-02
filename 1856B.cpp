<<<<<<< HEAD
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
=======
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
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545

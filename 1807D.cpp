<<<<<<< HEAD
// Prefix Sum
// revise and practice

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e7 + 10;
ll arr[N];
ll pf[N];

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            pf[i] = pf[i - 1] + arr[i];
        }

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            ll sum = pf[n] - (pf[r] - pf[l - 1]) + k * (r - l + 1);
            // subtract wala yeh hai jo initial element ka sum
            // k*(r-l+1) yeh hai new element ka sum
            if (sum % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
=======
// Prefix Sum
// revise and practice

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e7 + 10;
ll arr[N];
ll pf[N];

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            pf[i] = pf[i - 1] + arr[i];
        }

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            ll sum = pf[n] - (pf[r] - pf[l - 1]) + k * (r - l + 1);
            // subtract wala yeh hai jo initial element ka sum
            // k*(r-l+1) yeh hai new element ka sum
            if (sum % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545

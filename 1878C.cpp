<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum(int n)
{
    return (n * (n + 1LL)) / 2;
}
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        if (sum(k) <= x && sum(n) - sum(n - k) >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum(int n)
{
    return (n * (n + 1LL)) / 2;
}
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        if (sum(k) <= x && sum(n) - sum(n - k) >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
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
        ll n, a, b;
        cin >> n >> a >> b;
        if (a > b)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (n + a - 1) / a << endl;
        }
    }
    return 0;
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
        ll n, a, b;
        cin >> n >> a >> b;
        if (a > b)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (n + a - 1) / a << endl;
        }
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
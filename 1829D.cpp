<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int rec(int n, int m)
{
    if (n == m)
    {
        return 1;
    }
    if (n % 3 != 0)
    {
        return 0;
    }
    if (n % 3 == 0)
    {
        return (rec(n / 3, m) || rec(2 * (n / 3), m));
    }
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        if (rec(n, m))
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

int rec(int n, int m)
{
    if (n == m)
    {
        return 1;
    }
    if (n % 3 != 0)
    {
        return 0;
    }
    if (n % 3 == 0)
    {
        return (rec(n / 3, m) || rec(2 * (n / 3), m));
    }
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        if (rec(n, m))
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
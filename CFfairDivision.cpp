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
        int n;
        cin >> n;
        int arr[n];
        int alicesum = 0, bobsum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i += 2)
            {
                bobsum += arr[i];
            }
            for (int i = 1; i < n; i += 2)
            {
                alicesum += arr[i];
            }
        }
        if (alicesum == bobsum)
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
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int arr[n];
        int alicesum = 0, bobsum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i += 2)
            {
                bobsum += arr[i];
            }
            for (int i = 1; i < n; i += 2)
            {
                alicesum += arr[i];
            }
        }
        if (alicesum == bobsum)
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
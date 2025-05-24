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
}
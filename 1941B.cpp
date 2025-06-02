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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] < 0)
            {
                break;
            }
            arr[i + 1] -= 2 * arr[i];
            arr[i + 2] -= arr[i];
            arr[i] -= arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        if (count == n)
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] < 0)
            {
                break;
            }
            arr[i + 1] -= 2 * arr[i];
            arr[i + 2] -= arr[i];
            arr[i] -= arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        if (count == n)
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
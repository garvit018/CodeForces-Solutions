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
}
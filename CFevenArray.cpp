<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
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

        int even_mismatch = 0, odd_mismatch = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && arr[i] % 2 != 0)
            {
                even_mismatch++;
            }
            else if (i % 2 == 1 && arr[i] % 2 != 1)
            {
                odd_mismatch++;
            }
        }

        if (even_mismatch == odd_mismatch)
        {
            cout << even_mismatch << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
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

        int even_mismatch = 0, odd_mismatch = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && arr[i] % 2 != 0)
            {
                even_mismatch++;
            }
            else if (i % 2 == 1 && arr[i] % 2 != 1)
            {
                odd_mismatch++;
            }
        }

        if (even_mismatch == odd_mismatch)
        {
            cout << even_mismatch << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
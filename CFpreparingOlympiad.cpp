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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int ans = a[n - 1];

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > b[i + 1])
            {
                ans += (a[i] - b[i + 1]);
            }
        }
        cout << ans << endl;
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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int ans = a[n - 1];

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > b[i + 1])
            {
                ans += (a[i] - b[i + 1]);
            }
        }
        cout << ans << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
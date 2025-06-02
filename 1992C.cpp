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
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = n; i >= k; i--)
        {
            cout << i << " ";
        }
        for (int i = m + 1; i < k; i++)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= m; i++)
        {
            cout << i << " ";
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
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = n; i >= k; i--)
        {
            cout << i << " ";
        }
        for (int i = m + 1; i < k; i++)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= m; i++)
        {
            cout << i << " ";
        }
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
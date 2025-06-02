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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m), q(k);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> q[i];
        }
        vector<int> ans(m, 0);
        if (k == n) // agar saare questions ka ans pata hai toh harr jagah 1
        {
            for (int i = 0; i < m; i++)
            {
                ans[i] = 1;
            }
        }
        if (k < n - 1) // aisi koi list hi nhi bann paegi toh harr jagah 0
        {
            for (int i = 0; i < m; i++)
            {
                ans[i] = 0;
            }
        }
        if (k == n - 1)
        {
            for (int i = 0; i < m; i++)
            {
                if (i < k && a[i] != q[i])
                {
                    ans[i] = 1;
                    break;
                }
                else if (i >= k)
                {
                    ans[i] = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            cout << ans[i];
        }
        cout << endl;
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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m), q(k);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> q[i];
        }
        vector<int> ans(m, 0);
        if (k == n) // agar saare questions ka ans pata hai toh harr jagah 1
        {
            for (int i = 0; i < m; i++)
            {
                ans[i] = 1;
            }
        }
        if (k < n - 1) // aisi koi list hi nhi bann paegi toh harr jagah 0
        {
            for (int i = 0; i < m; i++)
            {
                ans[i] = 0;
            }
        }
        if (k == n - 1)
        {
            for (int i = 0; i < m; i++)
            {
                if (i < k && a[i] != q[i])
                {
                    ans[i] = 1;
                    break;
                }
                else if (i >= k)
                {
                    ans[i] = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
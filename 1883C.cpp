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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll oper, mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            oper = (k - (arr[i] % k)) % k;
            mini = min(oper, mini);
        }
        ll even_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even_count++;
            }
        }
        if (k == 4)
        {
            mini = min(mini, max(0LL, 2LL - even_count));
        }
        cout << mini << endl;
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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll oper, mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            oper = (k - (arr[i] % k)) % k;
            mini = min(oper, mini);
        }
        ll even_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even_count++;
            }
        }
        if (k == 4)
        {
            mini = min(mini, max(0LL, 2LL - even_count));
        }
        cout << mini << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
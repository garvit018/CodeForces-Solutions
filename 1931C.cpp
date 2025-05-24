#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll aage = 1, peeche = 1;
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                aage++;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i >= 1; i--)
        {
            if (arr[i] == arr[i - 1])
            {
                peeche++;
            }
            else
            {
                break;
            }
        }
        if (arr[0] == arr[n - 1])
        {
            if (aage == n || peeche == n)
            {
                cout << 0 << endl;
            }
            else
            cout << n - (aage + peeche) << endl;
        }
        else
        {
            cout << n - max(aage, peeche) << endl;
        }
    }
    return 0;
}
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
}
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
        pair<int, int> p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].second;
        }

        sort(p, p + n);

        for (int i = 0; i < n; i++)
        {
            cout << p[i].first << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << p[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}
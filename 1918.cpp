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
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
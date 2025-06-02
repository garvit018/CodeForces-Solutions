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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i].first > k)
            {
                break;
            }
            k += v[i].second;
        }
        cout << k << endl;
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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i].first > k)
            {
                break;
            }
            k += v[i].second;
        }
        cout << k << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
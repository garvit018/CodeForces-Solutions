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
        string l, r;
        cin >> l >> r;
        if (l == r)
        {
            cout << 0 << endl;
            continue;
        }
        if (l.size() < r.size())
        {
            for (int i = l.size(); i < r.size(); i++)
            {
                l = '0' + l;
            }
        }
        int uttar = 0;
        for (int i = 0; i < r.size(); i++)
        {
            if (l[i] != r[i])
            {
                uttar += r[i] - l[i] + 9 * (r.size() - i - 1);
                break;
            }
        }
        cout << abs(uttar) << endl;
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
        string l, r;
        cin >> l >> r;
        if (l == r)
        {
            cout << 0 << endl;
            continue;
        }
        if (l.size() < r.size())
        {
            for (int i = l.size(); i < r.size(); i++)
            {
                l = '0' + l;
            }
        }
        int uttar = 0;
        for (int i = 0; i < r.size(); i++)
        {
            if (l[i] != r[i])
            {
                uttar += r[i] - l[i] + 9 * (r.size() - i - 1);
                break;
            }
        }
        cout << abs(uttar) << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
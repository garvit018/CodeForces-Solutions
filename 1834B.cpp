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
}
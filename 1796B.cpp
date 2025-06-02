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
        string a, b;
        cin >> a >> b;
        if (a[0] == b[0])
        {
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            continue;
        }
        if (a[a.size() - 1] == b[b.size() - 1])
        {
            cout << "YES" << endl;
            cout << "*" << a[a.size() - 1] << endl;
            continue;
        }
        bool found = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            for (int j = 0; j < b.size() - 1; j++)
            {
                if (a[i] == b[j] && a[i + 1] == b[j + 1])
                {
                    cout << "YES" << endl;
                    cout << "*" << a.substr(i, 2) << "*" << endl;
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        if (!found)
        {
            cout << "NO" << endl;
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
        string a, b;
        cin >> a >> b;
        if (a[0] == b[0])
        {
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            continue;
        }
        if (a[a.size() - 1] == b[b.size() - 1])
        {
            cout << "YES" << endl;
            cout << "*" << a[a.size() - 1] << endl;
            continue;
        }
        bool found = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            for (int j = 0; j < b.size() - 1; j++)
            {
                if (a[i] == b[j] && a[i + 1] == b[j + 1])
                {
                    cout << "YES" << endl;
                    cout << "*" << a.substr(i, 2) << "*" << endl;
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        if (!found)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
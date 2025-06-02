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
        ll n;
        string s;
        cin >> n >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }

        if (count % 2 == 1)
        {
            cout << "NO" << endl;
        }

        else if (count == 2)
        {
            int flag = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }

        else
        {
            cout << "YES" << endl;
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
        ll n;
        string s;
        cin >> n >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }

        if (count % 2 == 1)
        {
            cout << "NO" << endl;
        }

        else if (count == 2)
        {
            int flag = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }

        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
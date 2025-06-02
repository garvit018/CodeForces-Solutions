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
        string s;
        cin >> s;
        if (s[0] == '?')
        {
            s[0] = '0';
        }
        for (int i = 1; i <= s.size(); i++)
        {
            if (s[i] == '?')
            {
                s[i] = s[i - 1];
            }
        }
        cout << s << endl;
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
        string s;
        cin >> s;
        if (s[0] == '?')
        {
            s[0] = '0';
        }
        for (int i = 1; i <= s.size(); i++)
        {
            if (s[i] == '?')
            {
                s[i] = s[i - 1];
            }
        }
        cout << s << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
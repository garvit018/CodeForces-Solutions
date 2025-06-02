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
        string s;
        cin >> n >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                s.erase(i + 1, 1);
                n--;
                i--;
            }
            else
            {
                s.erase(i, 1);
                n--;
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
        int n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                s.erase(i + 1, 1);
                n--;
                i--;
            }
            else
            {
                s.erase(i, 1);
                n--;
            }
        }
        cout << s << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
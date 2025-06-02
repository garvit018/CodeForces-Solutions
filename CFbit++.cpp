<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    string s;
    cin >> tt;
    int x = 0;
    while (tt--)
    {
        cin >> s;
        if (s[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    string s;
    cin >> tt;
    int x = 0;
    while (tt--)
    {
        cin >> s;
        if (s[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
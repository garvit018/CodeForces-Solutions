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
}
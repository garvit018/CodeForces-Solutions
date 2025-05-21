#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 3)
        {
            cout << "-1" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << string(n - 2, '3') + "66" << endl; // For even n
        }
        else
        {
            cout << string(n - 5, '3') + "36366" << endl; // For odd n
        }
    }
    return 0;
}
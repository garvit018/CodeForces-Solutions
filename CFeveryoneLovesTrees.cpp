<<<<<<< HEAD
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
=======
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
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
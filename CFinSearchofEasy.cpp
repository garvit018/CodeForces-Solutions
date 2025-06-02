<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            count++;
        }
    }
    if (count >= 1)
    {
        cout << "HARD" << endl;
    }
    else
        cout << "EASY" << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            count++;
        }
    }
    if (count >= 1)
    {
        cout << "HARD" << endl;
    }
    else
        cout << "EASY" << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    while (1)
    {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    while (1)
    {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
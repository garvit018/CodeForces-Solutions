<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int count = 0;

    while (n != 0)
    {
        if (n % 10 == 7 || n % 10 == 4)
        {
            count++;
        }
        n /= 10;
    }

    if (count == 7 || count == 4)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int count = 0;

    while (n != 0)
    {
        if (n % 10 == 7 || n % 10 == 4)
        {
            count++;
        }
        n /= 10;
    }

    if (count == 7 || count == 4)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
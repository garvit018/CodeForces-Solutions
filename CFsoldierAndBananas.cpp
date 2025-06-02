<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int tot = 0;
    int borrow = 0;

    for (int i = 1; i <= w; i++)
    {
        tot += i * k;
    }

    if (tot > n)
    {
        borrow = tot - n;
    }
    else
    {
        borrow = 0;
    }

    cout << borrow << endl;
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int tot = 0;
    int borrow = 0;

    for (int i = 1; i <= w; i++)
    {
        tot += i * k;
    }

    if (tot > n)
    {
        borrow = tot - n;
    }
    else
    {
        borrow = 0;
    }

    cout << borrow << endl;
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
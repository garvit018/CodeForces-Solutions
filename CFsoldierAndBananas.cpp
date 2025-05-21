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
}
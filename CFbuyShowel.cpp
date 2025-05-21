#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1, count = 1;
    int k, r;
    cin >> k >> r;

    if (k % 10 == r)
    {
        count = 1;
    }
    else
    {
        while (k * i % 10 != r && k * i % 10 != 0)
        {
            i++;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
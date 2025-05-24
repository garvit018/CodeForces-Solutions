#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    int i=0;
    cin >> tt;
    while (tt--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0;
        sum = a + b + c;
        if (sum >= 2)
        {
            i++;
        }
    }

    cout << i << endl;
    return 0;
}

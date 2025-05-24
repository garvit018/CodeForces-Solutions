#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int val = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= val && a[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, p;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        sum += p;
    }
    cout << sum / n << endl;

    return 0;
}
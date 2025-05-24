#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int j = 0, count = 0;
    while (j < x)
    {
        j = j + 5;
        count++;
    }
    cout << count << endl;
    return 0;
}
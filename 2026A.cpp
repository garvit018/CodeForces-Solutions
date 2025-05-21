#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int m = min(x, y);
        cout << "0 0 " << m << " " << m << endl;
        cout << m << " " << 0 << " " << 0 << " " << m << endl;
    }
}
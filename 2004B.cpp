#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        ll mini = min(r, R);
        ll maxi = max(l, L);
        // agar mini kam hua maxi se toh wo ek saath kabhi honge hi nhi toh sirf 1 door lock krna rhega
        // kyuki wo doors khol ke udhar toh jaa hi skte hai
        if (mini < maxi)
        {
            cout << 1 << endl;
            continue;
        }

        ll count = mini - maxi; // itne toh minimum honge hi

        if (l < maxi || L < maxi)
        {
            count++;
        }
        if (r > mini || R > mini)
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
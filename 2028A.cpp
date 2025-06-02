<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int x = 0, y = 0;
    string s;
    cin >> s;
    for (int i = 0; i < 100 * n; i++)
    {
        if (x == a && y == b)
        {
            cout << "YES" << endl;
            return;
        }
        if (s[i % n] == 'N')
            y++;
        if (s[i % n] == 'E')
            x++;
        if (s[i % n] == 'W')
            x--;
        if (s[i % n] == 'S')
            y--;
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int x = 0, y = 0;
    string s;
    cin >> s;
    for (int i = 0; i < 100 * n; i++)
    {
        if (x == a && y == b)
        {
            cout << "YES" << endl;
            return;
        }
        if (s[i % n] == 'N')
            y++;
        if (s[i % n] == 'E')
            x++;
        if (s[i % n] == 'W')
            x--;
        if (s[i % n] == 'S')
            y--;
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
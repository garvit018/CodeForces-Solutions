// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll tt;
//     cin >> tt;
//     while (tt--)
//     {
//         ll n, a, b, c;
//         cin >> n >> a >> b >> c;
//         ll sum = 0;
//         ll i = 0;
//         ll day = 0;
//         while (sum < n)
//         {
//             if (i % 3 == 0)
//             {
//                 sum += a;
//                 day++;
//             }
//             if (i % 3 == 1)
//             {
//                 sum += b;
//                 day++;
//             }
//             if (i % 3 == 2)
//             {
//                 sum += c;
//                 day++;
//             }
//             i++;
//         }
//         if (sum >= n)
//         {
//             cout << day << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum = a + b + c;
        int x = n / sum;
        int y = n % sum;
        int ans = x * 3;
        if (y <= a && y > 0)
        {
            ans++;
        }
        else if (y <= (a + b) && y > 0)
        {
            ans = ans + 2;
        }
        else if (y <= (a + b + c) && y > 0)
        {
            ans = ans + 3;
        }
        cout << ans << endl;
    }
    return 0;
}
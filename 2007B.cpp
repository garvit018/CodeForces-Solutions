// yeh logic perfect hai lekin TLE de rha hai

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll tt;
//     cin >> tt;
//     while (tt--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         ll arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         vector<ll> ans;

//         while (m--)
//         {
//             ll l, r;
//             char c;
//             cin >> c >> l >> r;

//             for (ll i = 0; i < n; i++)
//             {
//                 if (arr[i] >= l && arr[i] <= r)
//                 {
//                     if (c == '+')
//                     {
//                         arr[i] += 1;
//                     }
//                     else if (c == '-')
//                     {
//                         arr[i] -= 1;
//                     }
//                 }
//             }
//             ll maxi = *max_element(arr, arr + n);
//             ans.push_back(maxi);
//         }
//         for (int i = 0; i < ans.size(); i++)
//         {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// more optimised solution is this :-

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll maxi = *max_element(arr, arr + n);

        while (m--)
        {
            char c;
            ll l, r;
            cin >> c >> l >> r;
            if (c == '+' && maxi <= r && maxi >= l)
            {
                maxi++;
            }
            if (c == '-' && maxi <= r && maxi >= l)
            {
                maxi--;
            }
            cout << maxi << " ";
        }
        cout << endl;
    }
    return 0;
}
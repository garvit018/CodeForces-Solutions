// #include <bits/stdc++.h>
// using namespace std;

// #define read(x) \
//     int64_t x;  \
//     cin >> x;
// #define ll long long
// #define vi vector<int64_t>
// #define umap unordered_map
// #define uset unordered_set
// #define pb push_back
// #define fr(i, a, b) for (int64_t i = (a); i < (b); ++i)

// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     read(tt);
//     while (tt--)
//     {
//         char arr[8][8];
//         char ans = '-1';
//         for (int i = 0; i < 8; i++)
//         {
//             for (int j = 0; j < 8; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }

//         for (int i = 0; i < 8; i++)
//         {
//             int r = 0;
//             for (int j = 0; j < 8; j++)
//             {
//                 if (arr[i][j] == 'R')
//                 {
//                     r++;
//                 }
//             }
//             if (r == 8)
//             {
//                 ans = 'R';
//                 break;
//             }
//         }

//         if (ans == 'R')
//         {
//             cout << ans << endl;
//         }
//         else
//         {
//             cout << "B" << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define read(x) \
    int64_t x;  \
    cin >> x;
#define ll long long
#define vi vector<int64_t>
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define fr(i, a, b) for (int64_t i = (a); i < (b); ++i)

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    read(tt);
    while (tt--)
    {
        char arr[8][8];
        char ans = '-1';

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }

        // 'B' ko check krne
        for (int j = 0; j < 8; j++) // columns pehele
        {
            int b = 0;
            for (int i = 0; i < 8; i++) // rows ab ayengi
            {
                if (arr[i][j] == 'B')
                {
                    b++;
                }
            }
            if (b == 8) // If all elements in a column are 'B'
            {
                ans = 'B';
                break;
            }
        }

        if (ans == 'B')
        {
            cout << ans << endl;
        }
        else
        {
            cout << "R" << endl;
        }
    }
    return 0;
}

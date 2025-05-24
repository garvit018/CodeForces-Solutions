#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back

signed main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> arr(n), ans;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                ans.pb(arr[i]); 
                sort(ans.begin(), ans.end());
            }
            else
            {
                if (!ans.empty())
                {
                    sum += ans[ans.size() - 1];
                    ans.pop_back();
                }
            }
        }
        cout << sum << endl;
    }
}

// 2nd method using priority queue ->

// signed main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         priority_queue<int> pq;
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] != 0)
//             {
//                 pq.push(arr[i]);
//             }
//             else
//             {
//                 if (!pq.empty())
//                 {
//                     sum += pq.top();
//                     pq.pop();
//                 }
//             }
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }
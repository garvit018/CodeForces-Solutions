<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> mp;
        for (auto &it : arr)
        {
            mp[it]++;
        }

        int flag = 0;
        for (auto c : mp)
        {
            if (c.second % 2 == 1)
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> mp;
        for (auto &it : arr)
        {
            mp[it]++;
        }

        int flag = 0;
        for (auto c : mp)
        {
            if (c.second % 2 == 1)
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
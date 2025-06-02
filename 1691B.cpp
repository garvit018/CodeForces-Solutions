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
        vector<int> arr(n);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> ans(n);
            for (int i = 0; i < n; i++)
            {
                ans[i] = i + 1;
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] == arr[i + 1])
                {
                    swap(ans[i], ans[i + 1]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
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
        vector<int> arr(n);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> ans(n);
            for (int i = 0; i < n; i++)
            {
                ans[i] = i + 1;
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] == arr[i + 1])
                {
                    swap(ans[i], ans[i + 1]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
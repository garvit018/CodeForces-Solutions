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

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(arr[i + 1] - arr[i]) == 1 && arr[i] > arr[i + 1])
            {
                swap(arr[i + 1], arr[i]);
                i++;
            }
        }
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
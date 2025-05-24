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
        vector<int> arr(n), freq(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int ans = 0, c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] > 1)
            {
                ans++;
            }
            if (freq[i] == 1)
            {
                c++;
            }
        }
        ans += (c + 1) / 2 * 2;
        cout << ans << endl;
    }
    return 0;
}
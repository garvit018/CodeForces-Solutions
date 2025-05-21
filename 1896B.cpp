#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt, n;
    string s;

    cin >> tt;

    while (tt--)
    {
        cin >> n >> s;
        int mini = n, maxi = 0; // mini is first index of A and maxi is last index of B
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                mini = min(mini, i);
            }
            else
            {
                maxi = i;
            }
        }
        cout << max(0, maxi - mini) << endl; // ans toh first A - last B hona chahiye issliye
    }

    return 0;
}

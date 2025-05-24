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
        string word[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> word[i][j];
                mp[word[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (mp[word[i][j]] == 2)
                {
                    count += 1;
                }
                else if (mp[word[i][j]] == 1)
                {
                    count += 3;
                }
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}
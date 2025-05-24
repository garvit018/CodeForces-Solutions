#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        map<char, int> m;
        string s;
        cin >> s;
        for (auto &it : s)
        {
            m[it]++;
        }

        int min_freq = INT_MAX;
        int max_freq = INT_MIN;
        char min_char = '\0';
        char max_char = '\0';
        for (auto &it : m)
        {
            if (it.second < min_freq)
            {
                min_freq = it.second;
                min_char = it.first;
            }
            if (it.second >= max_freq)
            {
                max_freq = it.second;
                max_char = it.first;
            }
        }
        // cout<<min_char<<" "<<max_char<<endl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == min_char)
            {
                s[i] = max_char;
                break;
            }
        }
        cout << s << endl;
    }

    return 0;
}
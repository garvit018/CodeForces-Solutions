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
        string s;
        cin >> s;
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (i + 1 < s.size() && s[i] == s[i + 1])
            {
                ans = s.substr(i, 2);
            }
            else if (i + 2 < s.size() && s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2])
            {
                ans = s.substr(i, 3);
            }
        }

        if (ans.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'y' || s[i] == 'o' || s[i] == 'u')
        {
            s.erase(i, 1);
            i--;
        }
    }

    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        ans += ".";
        ans += s[i];
    }

    cout << ans << endl;

    return 0;
}
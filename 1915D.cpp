<<<<<<< HEAD
// my approach was by map but we dont require all vowels, we only require 'a' and 'e'toh wo manually
// check kr skte hai
// me frequency count kr krke check kr rha tha but wo bhot complicated hoga

// tutorial wale method se easily implement kr skte hai (revise)

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
        string s;
        cin >> n >> s;
        string ans = "";
        int count = 0;
        while (!s.empty())
        {
            if (s.back() == 'a' || s.back() == 'e')
            {
                count = 2;
            }
            else
            {
                count = 3;
            }
            while (count--)
            {
                ans += s.back();
                s.pop_back();
            }
            ans += ".";
        }

        ans.pop_back();                  // wo last wala dot ko remove krne
        reverse(ans.begin(), ans.end()); // string mai ulte elements ka order dala tha toh issliye seedha
        cout << ans << endl;
    }
    return 0;
=======
// my approach was by map but we dont require all vowels, we only require 'a' and 'e'toh wo manually
// check kr skte hai
// me frequency count kr krke check kr rha tha but wo bhot complicated hoga

// tutorial wale method se easily implement kr skte hai (revise)

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
        string s;
        cin >> n >> s;
        string ans = "";
        int count = 0;
        while (!s.empty())
        {
            if (s.back() == 'a' || s.back() == 'e')
            {
                count = 2;
            }
            else
            {
                count = 3;
            }
            while (count--)
            {
                ans += s.back();
                s.pop_back();
            }
            ans += ".";
        }

        ans.pop_back();                  // wo last wala dot ko remove krne
        reverse(ans.begin(), ans.end()); // string mai ulte elements ka order dala tha toh issliye seedha
        cout << ans << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
#include <bits/stdc++.h>
using namespace std;

#define read(x) \
    uint64_t x; \
    cin >> x;
#define ll long long int
#define vi vector<uint64_t>
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define fr(i, a, b) for (int i = (a); i < (b); ++i)

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    read(tt);
    while (tt--)
    {
        string s;
        int n, k;
        cin >> n >> k >> s;
        unordered_map<char, int> freq;
        int odd = 0;
        for (auto it : s)
        {
            freq[it]++;
        }
        for (auto it : freq)
        {
            if (it.second % 2 == 1)
            {
                odd++;
            }
        }
        if (k >= (odd - 1))
        // yeh issliye kyuki 1 odd count toh manage ho skte hai toh wo minus kr diya baaki ke
        // agar remove(k char) agar zyada hue toh saare odd remove ho jaenge agar kam toh odd
        // rhenge aur wo palindrome nhi rhega
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
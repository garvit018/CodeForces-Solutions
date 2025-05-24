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
        read(n);
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                count++;
            }
        }
        if (count % 2 == 1)
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
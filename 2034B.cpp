<<<<<<< HEAD
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
        ll n, m, k;
        string s;
        cin >> n >> m >> k >> s;

        ll continous_0 = 0;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                continous_0++;
            }
            else
            {
                continous_0 = 0;
            }

            if (m == continous_0) // then we will change that interval of m to 1 (with length k)
            {
                count++;
                continous_0 = 0;
                i += k - 1; // jaise k place aage move ho jae aur 1 hi baar count ho
            }
        }
        cout << count << endl;
    }
    return 0;
=======
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
        ll n, m, k;
        string s;
        cin >> n >> m >> k >> s;

        ll continous_0 = 0;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                continous_0++;
            }
            else
            {
                continous_0 = 0;
            }

            if (m == continous_0) // then we will change that interval of m to 1 (with length k)
            {
                count++;
                continous_0 = 0;
                i += k - 1; // jaise k place aage move ho jae aur 1 hi baar count ho
            }
        }
        cout << count << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
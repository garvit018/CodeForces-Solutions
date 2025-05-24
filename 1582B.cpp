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

ll power(int a)
{
    return pow(2, a);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    read(tt);
    while (tt--)
    {
        read(n);
        int arr[n];
        ll count_0 = 0;
        ll count_1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // sum-1 krna hai matlb ek hi 1 remove kr skte hai and kitne bhi 0 kr skte hai
        // issliye 1 ka count nikal liya jaise utne 1 ek-ek baar remove krke subsequence
        // banta gya aur baaki 0 ko le bhi skte aur nhi bhi le skte toh 2^count_of_0

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count_0++;
            }
            if (arr[i] == 1)
            {
                count_1++;
            }
        }
        ll ans = count_1 * power(count_0);
        cout << ans << endl;
    }

    return 0;
}
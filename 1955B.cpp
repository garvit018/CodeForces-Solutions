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
        int n, c, d;
        cin >> n >> c >> d;
        vi arr(n * n);
        for (int i = 0; i < n * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        vi brr(n * n);
        
        brr[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            brr[i] = brr[i - 1] + c;
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                brr[i * n + j] = brr[(i - 1) * n + j] + d;
            }
        }
        sort(brr.begin(), brr.end());

        if (arr == brr)
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
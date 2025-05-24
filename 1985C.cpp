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
        ll n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0;
        int ans = 0, maxi = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            maxi = max(maxi, arr[i]);
            if (sum - maxi == maxi)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
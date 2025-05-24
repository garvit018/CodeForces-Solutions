#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int64_t>
#define umap unordered_map
#define uset unordered_set
#define endl '\n'
#define pb push_back

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        vi arr(n + 1, 0);
        vi brr(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (!brr[arr[i]])
            {
                cout << arr[i] << " ";
                brr[arr[i]] = 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (brr[i] != 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
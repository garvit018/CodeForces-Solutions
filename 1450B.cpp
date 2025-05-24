#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int64_t>
#define umap unordered_map
#define uset unordered_set
#define pb push_back

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, k;
        cin >> n >> k;
        vi x(n), y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }

        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int flag = 1;
            for (int j = 0; j < n; j++)
            {
                if (abs(x[i] - x[j]) + abs(y[i] - y[j]) > k) //|xi−xj|+|yi−yj|≤k
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                ans = 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
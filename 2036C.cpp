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
        string s;
        ll q;
        cin >> s >> q;
        uset<ll> us;
        for (int i = 0; i < s.size() - 3; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
            {
                us.insert(i);
            }
        }

        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            x--; // jaise yeh 0-base indexing mai aa jae
            s[x] = char(y + '0');
            for (ll i = max(0LL, x - 3); i <= min((ll)s.size() - 4, x); ++i)
            {
                if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
                {
                    us.insert(i);
                }
                else
                {
                    us.erase(i);
                }
            }
            if (!us.empty())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
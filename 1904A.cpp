<<<<<<< HEAD
// solution dekha hai :- Kathan Vakaria (YT) se

#include <bits/stdc++.h>
using namespace std;

#define read(x) \
    int64_t x;  \
    cin >> x;
#define ll long long int
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
        ll a, b, xk, yk, xq, yq;
        int ans = 0;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        vector<pair<int, int>> directions = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
        set<pair<int, int>> sk, sq; // for attacking pos of king(sk) and queen(sq)
        for (auto d : directions)
        {
            int x = xk + d.first;  // attacking pos of king in x-direction
            int y = yk + d.second; // attacking pos of king in y-direction

            sk.insert({x, y});

            x = xq + d.first;  // attacking pos of queen in x-direction
            y = yq + d.second; // attacking pos of queen in y-direction

            sq.insert({x, y});
        }

        for (auto it : sk)
        {
            if (sq.find(it) != sq.end()) // agar queen ki same pos king set mai mil gyi toh ans++
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
=======
// solution dekha hai :- Kathan Vakaria (YT) se

#include <bits/stdc++.h>
using namespace std;

#define read(x) \
    int64_t x;  \
    cin >> x;
#define ll long long int
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
        ll a, b, xk, yk, xq, yq;
        int ans = 0;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        vector<pair<int, int>> directions = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
        set<pair<int, int>> sk, sq; // for attacking pos of king(sk) and queen(sq)
        for (auto d : directions)
        {
            int x = xk + d.first;  // attacking pos of king in x-direction
            int y = yk + d.second; // attacking pos of king in y-direction

            sk.insert({x, y});

            x = xq + d.first;  // attacking pos of queen in x-direction
            y = yq + d.second; // attacking pos of queen in y-direction

            sq.insert({x, y});
        }

        for (auto it : sk)
        {
            if (sq.find(it) != sq.end()) // agar queen ki same pos king set mai mil gyi toh ans++
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
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
        ll n, m, q;
        ll ans = 0;
        cin >> n >> m >> q;
        ll arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        while (q--)
        {
            int x;
            cin >> x;
            int teacher_1 = max(arr[1], arr[0]); // right wala
            int teacher_2 = min(arr[1], arr[0]); // left wala

            if (teacher_1 < x) // student sbse right mai hai
            {
                ans = n - teacher_1;
            }
            if (teacher_2 > x) // student sbse left mai hai
            {
                ans = teacher_2 - 1;
            }
            if (teacher_2 <= x && x <= teacher_1) // studend beech mai hai
            {
                ll d = (teacher_1 + teacher_2) / 2;
                ans = min(teacher_1 - d, d - teacher_2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
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
        read(n);
        ll arr[n], brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i] + brr[i];
        }
        cout << sum - *max_element(brr, brr + n) << endl;
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
        read(n);
        ll arr[n], brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i] + brr[i];
        }
        cout << sum - *max_element(brr, brr + n) << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
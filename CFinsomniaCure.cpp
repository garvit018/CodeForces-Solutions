<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    int count = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    int count = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
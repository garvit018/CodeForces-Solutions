<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int val = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= val && a[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int val = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= val && a[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545

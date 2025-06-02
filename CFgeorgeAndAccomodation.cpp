<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if ((q - p) >= 2)
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
    int n, p, q;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if ((q - p) >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
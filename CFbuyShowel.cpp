<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1, count = 1;
    int k, r;
    cin >> k >> r;

    if (k % 10 == r)
    {
        count = 1;
    }
    else
    {
        while (k * i % 10 != r && k * i % 10 != 0)
        {
            i++;
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
    int i = 1, count = 1;
    int k, r;
    cin >> k >> r;

    if (k % 10 == r)
    {
        count = 1;
    }
    else
    {
        while (k * i % 10 != r && k * i % 10 != 0)
        {
            i++;
            count++;
        }
    }

    cout << count << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }
    cout << n << endl;
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }
    cout << n << endl;
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
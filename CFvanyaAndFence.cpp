<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    int sum = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= h)
        {
            sum += 1;
        }
        else
        {
            sum += 2;
        }
    }
    cout << sum << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    int sum = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= h)
        {
            sum += 1;
        }
        else
        {
            sum += 2;
        }
    }
    cout << sum << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
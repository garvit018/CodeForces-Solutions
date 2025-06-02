<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 10 && arr[i + 1] == 01 || arr[i] == 01 && arr[i + 1] == 10)
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
    int n;
    cin >> n;
    int arr[n];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 10 && arr[i + 1] == 01 || arr[i] == 01 && arr[i + 1] == 10)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
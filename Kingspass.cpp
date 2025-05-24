#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr.erase(arr.begin() + i, arr.begin() + i + 2);
            i = max(-1, i - 2);
            n = arr.size();
        }
    }
    cout << arr.size() << endl;

    return 0;
}
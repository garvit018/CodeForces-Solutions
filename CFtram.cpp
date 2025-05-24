#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    int count = 0;
    int max_count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        count = count - a + b;
        max_count = max(max_count, count);
    }
    cout << max_count << endl;

    return 0;
}
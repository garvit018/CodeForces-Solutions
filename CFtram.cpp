<<<<<<< HEAD
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
=======
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
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
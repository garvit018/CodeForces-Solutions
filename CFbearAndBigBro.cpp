<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }

    cout << count << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }

    cout << count << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
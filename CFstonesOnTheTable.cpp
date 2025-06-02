<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
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
    int count = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
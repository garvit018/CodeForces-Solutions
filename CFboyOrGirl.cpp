<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count = 0;
    cin >> s;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (i == s.size() - 1 || s[i] != s[i + 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count = 0;
    cin >> s;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (i == s.size() - 1 || s[i] != s[i + 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
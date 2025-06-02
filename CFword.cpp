<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            count++;
        }
        else
            c++;
    }

    if (count > c)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;
            }
        }
    }

    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
    }

    cout << s << endl;
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            count++;
        }
        else
            c++;
    }

    if (count > c)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;
            }
        }
    }

    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
    }

    cout << s << endl;
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
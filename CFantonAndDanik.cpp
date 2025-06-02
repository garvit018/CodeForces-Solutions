<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            count++;
        }
        else
        {
            c++;
        }
    }

    if (count > c)
    {
        cout << "Anton" << endl;
    }
    else if (c == count)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            count++;
        }
        else
        {
            c++;
        }
    }

    if (count > c)
    {
        cout << "Anton" << endl;
    }
    else if (c == count)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
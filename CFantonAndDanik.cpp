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
}
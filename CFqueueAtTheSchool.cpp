<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < s.size() - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
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
    int n, t;
    string s;
    cin >> n >> t >> s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < s.size() - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }

    cout << s << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
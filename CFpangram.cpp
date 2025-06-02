<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> m;

    for (char c : s)
    {
        m.insert(tolower(c));
    }

    if (m.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> m;

    for (char c : s)
    {
        m.insert(tolower(c));
    }

    if (m.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
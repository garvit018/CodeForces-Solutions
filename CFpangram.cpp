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
}
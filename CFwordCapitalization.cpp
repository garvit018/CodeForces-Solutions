#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] > 96 && s[0] < 123 && s.size() > 0)
    {
        s[0] -= 32;
    }
    cout << s << endl;

    return 0;
}
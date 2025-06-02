<<<<<<< HEAD
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
=======
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
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
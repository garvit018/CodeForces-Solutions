<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        string b;
        cin >> b;
        string temp = "";
        temp.push_back(b[0]);
        for (int i = 1; i < b.length() - 1; i += 2)
        {
            if (b[i] == b[i + 1] && b.length() > 2)
            {
                temp.push_back(b[i]);
            }
        }
        temp.push_back(b[b.length() - 1]);
        cout << temp << endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        string b;
        cin >> b;
        string temp = "";
        temp.push_back(b[0]);
        for (int i = 1; i < b.length() - 1; i += 2)
        {
            if (b[i] == b[i + 1] && b.length() > 2)
            {
                temp.push_back(b[i]);
            }
        }
        temp.push_back(b[b.length() - 1]);
        cout << temp << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
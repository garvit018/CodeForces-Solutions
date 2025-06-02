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
        int n;
        cin >> n;
        string s = "";
        string vowels = "aeiou";
        for (int i = 0; i < n; i++)
        {
            s += vowels[i % 5];
        }
        sort(s.begin(), s.end());
        cout << s << endl;
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
        int n;
        cin >> n;
        string s = "";
        string vowels = "aeiou";
        for (int i = 0; i < n; i++)
        {
            s += vowels[i % 5];
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
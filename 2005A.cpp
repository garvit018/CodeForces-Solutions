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
}
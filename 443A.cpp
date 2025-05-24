#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    getline(cin, s);
    unordered_set<char> st;
    for (char it : s)
    {
        if (it >= 'a' && it <= 'z')
        {
            st.insert(it);
        }
    }
    cout << st.size() << endl;

    return 0;
}
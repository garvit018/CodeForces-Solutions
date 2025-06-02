<<<<<<< HEAD
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
=======
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
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
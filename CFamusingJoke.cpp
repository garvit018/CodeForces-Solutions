<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string temp = s1 + s2;
    sort(temp.begin(), temp.end());
    sort(s3.begin(), s3.end());

    if (temp == s3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string temp = s1 + s2;
    sort(temp.begin(), temp.end());
    sort(s3.begin(), s3.end());

    if (temp == s3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
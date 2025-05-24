#include <bits/stdc++.h>
using namespace std;

int main()
{
    string one;
    string two;

    cin >> one >> two;
    transform(one.begin(), one.end(), one.begin(), ::tolower);
    transform(two.begin(), two.end(), two.begin(), ::tolower);

    if (one > two)
    {
        cout << "1" << endl;
    }
    else if (one == two)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
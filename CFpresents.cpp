<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int reciever = 1; reciever <= n; reciever++)
    {
        for (int giver = 0; giver < n; giver++)
        {
            if (p[giver] == reciever)
            {
                cout << giver + 1 << " ";
                break;
            }
        }
    }

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int reciever = 1; reciever <= n; reciever++)
    {
        for (int giver = 0; giver < n; giver++)
        {
            if (p[giver] == reciever)
            {
                cout << giver + 1 << " ";
                break;
            }
        }
    }

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
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
        string s;
        cin >> n >> s;

        map<char, int> freq;
        int balloons = 0;

        for (auto &it : s)
        {
            if (freq[it] == 0)
            {
                balloons += 2;
            }
            else
            {
                balloons += 1;
            }
            freq[it]++;
        }

        cout << balloons << endl;
    }
    return 0;
}
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
        string s;
        cin >> n >> s;

        map<char, int> freq;
        int balloons = 0;

        for (auto &it : s)
        {
            if (freq[it] == 0)
            {
                balloons += 2;
            }
            else
            {
                balloons += 1;
            }
            freq[it]++;
        }

        cout << balloons << endl;
    }
    return 0;
}
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545

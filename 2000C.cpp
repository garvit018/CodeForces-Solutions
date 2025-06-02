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
        int n, m;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            map<int, char> m1;
            map<char, int> m2;
            if (s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            int flag = 1;
            for (int i = 0; i < s.size(); i++)
            {
                int num = arr[i];
                char ch = s[i];
                if (m1.count(num) == 0 && m2.count(ch) == 0)
                {
                    m1[num] = ch;
                    m2[ch] = num;
                }

                if (m1[num] != ch || m2[ch] != num)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
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
        int n, m;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            map<int, char> m1;
            map<char, int> m2;
            if (s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            int flag = 1;
            for (int i = 0; i < s.size(); i++)
            {
                int num = arr[i];
                char ch = s[i];
                if (m1.count(num) == 0 && m2.count(ch) == 0)
                {
                    m1[num] = ch;
                    m2[ch] = num;
                }

                if (m1[num] != ch || m2[ch] != num)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
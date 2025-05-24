// easy to read and understand

// logic :-

// if string s starts with 'aa' or 'bb' -> for 'aa'  string a = first alphabet, string b = second alphabet
// rest is string c and simililarly for case 'bb'

// if string s  starts with different letters ba, nothing is algo changes we set string a = first alpha and
// string b = second alpha and rest c

// if string starts with ab then string a = frst and string c = last and rest b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        string a, b, c;
        if (s.substr(0, 2) == "aa" || s.substr(0, 2) == "ba" || s.substr(0, 2) == "bb")
        {
            a = s[0];
            b = s[1];
            c = s.substr(2, s.size() - 2);
        }
        else
        {
            a = s[0];
            c = s[s.size() - 1];
            b = s.substr(1, s.size() - 2);
        }
        cout << a << " " << b << " " << c << " " << endl;
    }

    return 0;
}

// complicated way

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll tt;
//     cin >> tt;
//     while (tt--)
//     {
//         string s, a = "", b = "", c = "";
//         cin >> s;
//         ll n = s.size();

//         if (s[0] == s[n - 1])
//         {
//             a = s[0];
//             c = s[n - 1];
//             for (int i = 1; i < n - 1; i++)
//             {
//                 b += s[i];
//             }
//         }
//         else
//         {
//             if (s[0] == s[1])
//             {
//                 a = s[0];
//                 b = s[1];
//                 for (int i = 2; i < n; i++)
//                 {
//                     c += s[i];
//                 }
//             }
//             else if (s[0] == 'a')
//             {
//                 a = s[0];
//                 c = s[n - 1];
//                 for (int i = 1; i < n - 1; i++)
//                 {
//                     b += s[i];
//                 }
//             }
//             else
//             {
//                 a = s[0];
//                 b = s[1];
//                 for (int i = 2; i < n; i++)
//                 {
//                     c += s[i];
//                 }
//             }
//         }
//         cout << a << " " << b << " " << c << endl;
//     }
//     return 0;
// }
<<<<<<< HEAD
// revise this logic bcz watched video solution of this question (YT solution by KATHAN VAKARIA)

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s, t;
    cin >> s >> t;
    map<char, int> freq_s, freq_t;

    for (auto ch : s)
    {
        freq_s[ch]++;
    }
    for (auto ch : t)
    {
        freq_t[ch]++;
    }

    int i = 0, j = 0; // two pointer approach
    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j])
        {
            if (freq_s[s[i]] < freq_t[t[j]])
            {
                break;
            }
            if (freq_s[s[i]] == freq_t[t[j]])
            {
                // match ho gya
                freq_t[t[j]]--; // jaise wo character remove ho jaae aur remaining = apan ko jo chahiye
                j++;
            }
        }
        freq_s[s[i]]--; // harr character ki freq count kam ho jae kyuki wo aage toh kaam nhi aaane wala
        i++;
    }
    if (j == t.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
=======
// revise this logic bcz watched video solution of this question (YT solution by KATHAN VAKARIA)

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s, t;
    cin >> s >> t;
    map<char, int> freq_s, freq_t;

    for (auto ch : s)
    {
        freq_s[ch]++;
    }
    for (auto ch : t)
    {
        freq_t[ch]++;
    }

    int i = 0, j = 0; // two pointer approach
    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j])
        {
            if (freq_s[s[i]] < freq_t[t[j]])
            {
                break;
            }
            if (freq_s[s[i]] == freq_t[t[j]])
            {
                // match ho gya
                freq_t[t[j]]--; // jaise wo character remove ho jaae aur remaining = apan ko jo chahiye
                j++;
            }
        }
        freq_s[s[i]]--; // harr character ki freq count kam ho jae kyuki wo aage toh kaam nhi aaane wala
        i++;
    }
    if (j == t.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
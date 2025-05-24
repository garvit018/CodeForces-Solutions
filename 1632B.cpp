// logic -> apan ko max bit ko nullify krna hai toh 1^1=0 toh jis jis number msb bit 1 hai
// unko saath rkho aur phir 0 laga do aur phir jin number mai msb bit 0 hai unko saath rkho
// toh isse ans min aayega

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    vector<ll> vec;
    for (ll i = 0; i < 21; i++)
    {
        vec.push_back(pow(2, i));
    }
    while (tt--)
    {
        ll n;
        cin >> n;
        int idx = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] < n)
            {
                idx = vec[i];
            }
        }
        for (int i = n - 1; i >= idx; i--)
        {
            cout << i << " ";
        }
        for (int i = 0; i < idx; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
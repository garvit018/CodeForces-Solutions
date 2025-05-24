#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int arr[n];
        int hcf = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            hcf = gcd(hcf, arr[i]);
        }
        if (hcf == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (gcd(hcf, n) == 1) // cheapest opertation hoga yeh
                              // yeh n ek tareeke se index aayega 
                              // pehele poore ka hcf nikal kr inded wise gcd krlo 
        {
            cout << 1 << endl;
            continue;
        }
        if (gcd(hcf, n - 1) == 1) //agar second last wale ke saath gcd 1 ho gya toh cost 2 ayegi
        {
            cout << 2 << endl;
            continue;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        // this shows that arr[n-1]- arr[n-2] hona toh pacca hai toh apan ko arr[n-2] ko jitna ho ske utna
        // kam karna hai. Wo chiz tb hi ho skti jb arr[n-2] ko harr kisi se fight krwaye
        // toh pehele arr[0]......arr[n-1] sum nikal lo phir uss mai 2*arr[n-2] subtract krdo
        // kyuki arr[n-2] ek baar add ho chuka and ek baar toh subtract karna hi hai
        // issliye 2 baar subtract krna hai
        //  for (int i = 0; i < n - 2; i++)
        //  {
        //      sum += arr[i];
        //  }
        //  cout << arr[n - 1] - (arr[n - 2] - sum) << endl;

        cout << sum - 2 * arr[n - 2] << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int firstpos = 0, lastpos = 0;
        int fcnt = 0, lcnt = 0;

        for (int i = 0; i < n && fcnt < k; i++)
        {
            if (arr[i] == arr[0])
            {
                firstpos = i;
                fcnt++;
            }
        }
        for (int i = n - 1; i >= 0 && lcnt < k; i--)
        {
            if (arr[i] == arr[n - 1])
            {
                lastpos = i;
                lcnt++;
            }
        }
        if (lcnt >= k && fcnt >= k && (arr[0] == arr[n - 1] || firstpos < lastpos))
        // lcnt and fcnt toh >=k hone hi chahiye baaki agar arr[0]=arr[n-1] phir chahe kuch hi ho 
        // first and last pos 
        // agar wo barabar nhi hote toh firstpos<lastpos kyuki agar ulta hua mtlb lcnt=k tb ho rha
        // jab firstpos ka count abhi complete nhi hua 
        // like test case 4
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
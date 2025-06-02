<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    vector<int> ans = {s1, s2, s3, s4};

    sort(ans.begin(), ans.end());

    int count = 0;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == ans[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    vector<int> ans = {s1, s2, s3, s4};

    sort(ans.begin(), ans.end());

    int count = 0;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == ans[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545
}
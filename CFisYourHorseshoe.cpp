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
}
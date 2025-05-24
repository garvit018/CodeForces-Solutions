#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prog, math, PE; // index store krne ke liye
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            prog.push_back(i);
        }
        if (t == 2)
        {
            math.push_back(i);
        }
        if (t == 3)
        {
            PE.push_back(i);
        }
    }

    int w = min({PE.size(), prog.size(), math.size()}); // teeno subjects ka minimum count jaise teeno
                                                        // subject include ho jaae ek team banane mai
    cout << w << endl;

    for (int i = 0; i < w; i++)
    {
        cout << prog[i] << " " << math[i] << " " << PE[i] << endl; // index print krne
    }

    return 0;
}
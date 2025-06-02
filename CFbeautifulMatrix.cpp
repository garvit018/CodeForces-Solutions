<<<<<<< HEAD
#include <iostream>
#include <cmath> // For std::abs
using namespace std;

int main()
{
    int matrix[5][5];
    int count = 0;
    int x, y;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    count = abs(x - 2) + abs(y - 2);

    cout << count << endl;

    return 0;
}
=======
#include <iostream>
#include <cmath> // For std::abs
using namespace std;

int main()
{
    int matrix[5][5];
    int count = 0;
    int x, y;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    count = abs(x - 2) + abs(y - 2);

    cout << count << endl;

    return 0;
}
>>>>>>> 4bb7f1e9c9149de1c5c4e3b2a9a463945e04b545

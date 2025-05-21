#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[1001];  // Array to store digits
    string s;
    cin >> s;
    int count = 0;

    // Collect digits and store them in arr
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            continue;  // Skip '+' characters
        } else {
            arr[count++] = s[i] - '0';  // Convert char to int and store in arr
        }
    }

    // Sort the digits in the array
    sort(arr, arr + count);

    // Output the sorted digits with "+" in between
    for (int i = 0; i < count; i++) {
        cout << arr[i];  // Print the digit
        if (i < count - 1) {
            cout << "+";  // Print "+" after the digit, except for the last one
        }
    }
    cout << endl;

    return 0;
}
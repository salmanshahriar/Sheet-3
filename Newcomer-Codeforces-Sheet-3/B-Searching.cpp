// B. Searching
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

// Note: X may be found once or more than once and may not be found.

// Input
// First line contains a number N (1 ≤ N ≤ 105) number of elements.

// Second line contains N numbers (0 ≤ Ai ≤ 109).

// Third line contains a number X (0 ≤ X ≤ 109).

// Output
// Print the position of X in the first time you find it. If it doesn't exist print -1.

#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
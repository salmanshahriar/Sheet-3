// E. Lowest Number
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the lowest number and its position.

// Note: if there are more than one answer print first one's position.

// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers (-105  ≤  Ai  ≤  105).

// Output
// Print the lowest number and its position (1-index).

// Examples
// Input
// 3
// 1 2 3
// Output
// 1 1

// Input
// 5
// 5 6 2 3 2
// Output
// 2 3

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= 10) {
            cout << "A[" << i << "] = " << a[i] << '\n';
        }
    }
    
    return 0;
}
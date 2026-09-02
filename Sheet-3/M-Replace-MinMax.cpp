// M. Replace MinMax
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the array after doing the
// following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

// It's guaranteed that all numbers are distinct.

// Output
// Print the array after the replacement operation.

// Example
// Input
// 5
// 4 1 3 10 8
// Output
// 4 10 3 1 8

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int minIndex = 0;
  int maxIndex = 0;

  for (int i = 1; i < n; i++) {
    if (a[i] < a[minIndex]) {
      minIndex = i;
    }

    if (a[i] > a[maxIndex]) {
      maxIndex = i;
    }
  }

  int temp = a[minIndex];
  a[minIndex] = a[maxIndex];
  a[maxIndex] = temp;

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
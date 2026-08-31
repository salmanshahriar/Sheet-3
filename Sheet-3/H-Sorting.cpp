// H. Sorting
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Print the numbers after sorting
// them.

// Note:

// Don't use built-in-functions.
// try to solve it with bubble sort algorithm or Selection Sort.
// for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
// Input
// First line contains a number N (0 < N < 103) number of elements.

// Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the numbers after sorting them.

// Examples
// Input
// 3
// 3 1 2
// Output
// 1 2 3
// Input
// 4
// 5 2 7 3
// Output
// 2 3 5 7

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
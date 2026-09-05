// P. Minimize Number
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N positive numbers. Print maximum possible
// operations that can be performed.

// The operation is as follows: if all numbers are even then divide each of them
// by 2 otherwise, you can not perform any more operations.

// Input
// First line contains a number N (1 ≤ N ≤ 200) number of elements.

// Second line contains N numbers (1  ≤  Ai  ≤  109).

// Output
// Print the maximum possible number of operations that can be performed.

// Examples
// Input
// 3
// 8 12 40
// Output
// 2
// Input
// 4
// 5 6 8 10
// Output
// 0
// Note
// First example:

// Initially, [8,12,40] are written on the blackboard. Since all those integers
// are even, You can perform the operation.

// After the operation is performed once, [4,6,20] are written on the
// blackboard. Since all those integers are again even, You can perform the
// operation.

// After the operation is performed twice, [2,3,10] are written on the
// blackboard. Now, there is an odd number 3 on the blackboard, so you cannot
// perform the operation any more.

// Thus, you can perform the operation at most twice.

// Second example:

// Since there is an odd number 5 on the blackboard already in the beginning,
// You cannot perform the operation at all.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int count = 0;

  while (true) {
    int odd = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] % 2 != 0) {
        odd = 1;
        break;
      }
    }

    if (odd == 1) {
      break;
    }

    for (int i = 0; i < n; i++) {
      a[i] = a[i] / 2;
    }

    count++;
  }

  cout << count;

  return 0;
}
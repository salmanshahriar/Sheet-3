// O. Fibonacci
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print the Fibonacci number of N.

// Note: In order to create the Fibonacci sequence use the following function:

// fib(1) = 0.
// fib(2) = 1.
// fib(n) = fib(n - 1) + fib(n - 2).
// Input
// Only one line containing a number N (1 ≤ N ≤ 50).

// Output
// Print the Fibonacci number of N.

// Examples
// Input
// 1
// Output
// 0
// Input
// 5
// Output
// 3
// Note
// For more information visit Fibonacci:
// https://www.mathsisfun.com/numbers/fibonacci-sequence.html.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long first = 0;
  long long second = 1;

  if (n == 1) {
    cout << first;
    return 0;
  }

  if (n == 2) {
    cout << second;
    return 0;
  }

  for (int i = 3; i <= n; i++) {
    long long next = first + second;

    first = second;
    second = next;
  }

  cout << second;

  return 0;
}
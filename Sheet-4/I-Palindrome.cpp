
// I. Palindrome
// time limit per test1 second
// memory limit per test256 megabytes
// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is
// same as the string. For example, "abba" is palindrome, but "abbc" is not
// palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of
// the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

// Examples
// Input
// abba
// Output
// YES
// Input
// icpcassiut
// Output
// NO
// Input
// mam
// Output
// YES

#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  int palindrome = 1;

  int left = 0;
  int right = s.size() - 1;

  while (left < right) {
    if (s[left] != s[right]) {
      palindrome = 0;
      break;
    }

    left++;
    right--;
  }

  if (palindrome == 1) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
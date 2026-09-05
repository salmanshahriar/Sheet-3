// G. Conversion
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a string S. Print the origin string after replacing the following:

// Replace every comma character ',' with a space character.
// Replace every capital character in S with its respective small character and
// Vice Versa. Input Only one line contains a string S (1 ≤ |S| ≤ 105) where |S|
// is the length of the string and it consists of lower and upper English
// letters and comma character ','.

// Output
// Print the string after the conversion.

// Example
// Input
// happy,NewYear,enjoy
// Output
// HAPPY nEWyEAR ENJOY

#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {

    if (s[i] == ',') {
      s[i] = ' ';
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = s[i] - 32;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] + 32;
    }
  }

  cout << s;

  return 0;
}

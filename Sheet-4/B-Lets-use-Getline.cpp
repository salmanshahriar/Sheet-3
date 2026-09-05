// B. Let's use Getline
// time limit per test1 second
// memory limit per test64 megabytes
// Given a string S. Print the string S from the beginning to the first '\'
// character without printing the '\'.

// Hint: use function getline(cin, s).

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of
// the string.

// It's guaranteed that S will contain '\' symbol.

// Output
// Print the answer required above.

// Examples
// Input
// Egyptian collegiate programming\ contest
// Output
// Egyptian collegiate programming
// Input
// google \or facebook
// Output
// google

#include <iostream>
using namespace std;

int main() {
  string s;

  getline(cin, s);

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '\\') {
      break;
    }

    cout << s[i];
  }

  return 0;
}
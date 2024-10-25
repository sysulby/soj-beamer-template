#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(char s[]) {
  int len = strlen(s);
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (s[i] != s[j]) reutrn false;
  }
  return true;
}

char s[110];

int main() {
  cin >> s; 
  if (isPalindrome(s)) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
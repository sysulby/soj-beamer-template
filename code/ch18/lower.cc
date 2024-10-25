#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.size();
  for (int i = 0; i < len; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] - 'A' + 'a';
    }
  }
  cout << s << endl;

  return 0;
}
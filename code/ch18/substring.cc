#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i + 3 - 1 < s.size(); i++) {
    cout << s.substr(i, 3) << endl;
  }

  return 0;
}
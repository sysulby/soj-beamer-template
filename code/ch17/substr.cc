#include <iostream>
#include <cstring>

using namespace std;

char s[110];

int main() {
  int pos, len;
  cin >> s; 
  cin >> pos >> len;
  for (int i = pos, j = 0; j < len; i++, j++) {
    cout << s[i];
  }
  cout << endl;

  return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

char s[110];

int main() {
  cin >> s; 
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    // 判断当前字符是否为大写字母，并转为小写字母
    if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
  }
  cout << s << endl;

  return 0;
}
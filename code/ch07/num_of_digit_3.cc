#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  do {
    if (n % 10 == 3) { // 判断取出的最低位是否为 3
      cnt++;
    }
    n /= 10;           // 抹去最低位
  } while (n != 0);
  cout << cnt << endl;

  return 0;
}

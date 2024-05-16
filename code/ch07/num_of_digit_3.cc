#include <iostream>

using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;
  do {
    int r = n % 10; // 取出最低位
    n /= 10;        // 抹去最低位
    if (r == 3) {   // 判断取出的最低位是否为 3
      cnt++;
    }
  } while (n != 0);
  cout << cnt << endl;
  
  return 0;
}

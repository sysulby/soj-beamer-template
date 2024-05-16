#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0; // 记录位数
  do {
    cnt++;     // 位数加 1
    n /= 10;   // 相当于 n = n / 10，去掉 n 的最后一位
  } while (n != 0);
  cout << cnt << endl;

  return 0;
}

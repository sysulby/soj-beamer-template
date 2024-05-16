#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  bool f = (10 <= n && n <= 99);
  // 两位数是 10 ~ 99 之间的数
  // 注意不能写成 10 <= n <= 99 的形式
  cout << f << endl;

  return 0;
}

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  bool f = (n % 4 == 0);
  // 判断 n 是否为 4 的倍数，即 n 除以 4 的余数是否为 0
  cout << f << endl;

  return 0;
}

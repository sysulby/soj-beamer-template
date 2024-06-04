#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  // maxv 记录最大值，pos 记录最大值是第几个数（位置）
  int maxv = -1000000000, pos = 0, x;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (x > maxv) {
      maxv = x; // 攻擂成功，成为擂主
      pos = i;  // 记录擂主是当前第 i 个数
    }
  }
  cout << maxv << " " << pos << endl;

  return 0;
}

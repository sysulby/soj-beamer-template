#include <iostream>
using namespace std;

int main() {
  int n, x;
  int Max = -1e9;
  int MaxId;  // 记录最大值是第几个数（位置）
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (x > Max) {
      Max = x;    // 攻擂成功，成为擂主
      MaxId = i;  // 记录擂主是当前第 i 个数
    }
  }
  cout << Max << " " << MaxId << endl;
  return 0;
}

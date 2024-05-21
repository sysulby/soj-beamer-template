#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int kg = n - 1, xh = 1; // kg 表示空格数量，xh 表示星号数量
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= kg; j++) { // 输出 kg 个空格
      cout << " ";
    }
    for (int j = 1; j <= xh; j++) { // 输出 xh 个星号
      cout << "*";
    }
    cout << endl;
    kg--;    // 下一行空格数 - 1
    xh += 2; // 下一行星号数 + 2
  }

  return 0;
}

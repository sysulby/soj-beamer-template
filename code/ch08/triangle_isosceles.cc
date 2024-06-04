#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int k = n - 1, x = 1; // k 表示空格数量，x 表示星号数量
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) { // 输出 k 个空格
      cout << " ";
    }
    for (int j = 1; j <= x; j++) { // 输出 x 个星号
      cout << "*";
    }
    cout << endl;
    k--;    // 下一行的空格数 - 1
    x += 2; // 下一行的星号数 + 2
  }

  return 0;
}

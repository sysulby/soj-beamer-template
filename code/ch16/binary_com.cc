#include <iostream>

using namespace std;

int bin[35];

int main() {
  int n;
  cin >> n;
  // 从低位到高位依次取出 n 的补码的每一位，存储在 bin 数组中
  for (int i = 1; i <= 8; i++) {
    bin[i] = n & 1;
    n >>= 1; // n = n >> 1;
  }
  // 逆序输出结果
  for (int i = 8; i >= 1; i--) {
    cout << bin[i];
  }
  return 0;
}
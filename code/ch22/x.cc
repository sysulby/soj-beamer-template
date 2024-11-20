#include <iostream>
using namespace std;

int X(int n) {
  // 结束条件
  if (n <= 3) return n;
  // 自我调用
  return X(n - 1) + X(n - 2) + 2 * X(n - 3);
}

int main() {
  int k;
  cin >> k;
  cout << X(k) << endl;

  return 0;
}
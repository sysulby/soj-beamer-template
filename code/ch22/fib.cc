#include <iostream>
using namespace std;

int fibo(int n) {
  // 结束条件
  if (n == 1 || n == 2) return 1;
  // 自我调用
  return fibo(n - 1) + fibo(n - 2);
}

int main() {
  int k;
  cin >> k;
  cout << fibo(k) << endl;
  return 0;
}
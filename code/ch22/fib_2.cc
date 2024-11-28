#include <iostream>
using namespace std;

int f[30]; // f[i] 表示斐波那契数列第 i 项的值

int main() {
  int k;
  cin >> k;
  f[1] = f[2] = 1;
  for (int i = 3; i <= k; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }
  cout << f[k] << endl;

  return 0;
}
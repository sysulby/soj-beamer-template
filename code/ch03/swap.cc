#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int tmp = a; // 把变量 a 原本的值存到变量 tmp 中
  a = b;       // 把变量 b 的值赋值给变量 a
  b = tmp;     // 把变量 tmp 的值赋值给变量 b
  cout << a << " " << b << endl;

  return 0;
}

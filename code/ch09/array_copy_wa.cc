#include <iostream>

using namespace std;

int a[105], b[105];

int main() {
  int n;
  cin >> n;
  // 输入数组 a
  for (int i = 1; i <= n; i++) cin >> a[i];
  // 将数组 a 赋值给数组 b
  b = a;
  // 输出数组 b
  for (int i = 1; i <= n; i++) cout << b[i] << " ";
  cout << endl;

  return 0;
}

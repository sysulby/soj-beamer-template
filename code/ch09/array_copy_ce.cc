#include <iostream>

using namespace std;

int a[105], b[105];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) { // 输入数组 a
    cin >> a[i];
  }
  b = a;                         // 将数组 a 赋值给数组 b
  for (int i = 1; i <= n; i++) { // 输出数组 b
    cout << b[i] << " ";
  }
  cout << endl;

  return 0;
}

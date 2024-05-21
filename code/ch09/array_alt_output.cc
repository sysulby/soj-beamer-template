#include <iostream>

using namespace std;

int a[105];

int main() {
  int n;
  cin >> n;
  // 按照下标 1 ~ n 的顺序输入数组元素
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  // 交替输出数组元素
  for (int i = 1, j = n ; i <= j; i++, j--) {
    cout << a[i] << " " << a[j] << endl;
  }

  return 0;
}

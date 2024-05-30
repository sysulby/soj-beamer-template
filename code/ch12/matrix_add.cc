#include <iostream>

using namespace std;

int a[105][105], b[105][105], c[105][105];

int main() {
  int n, m;
  cin >> n >> m;
  // 输入 a 数组
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  // 输入 b 数组
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> b[i][j];
    }
  }
  // 计算两个矩阵的和
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
  // 输出结果
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout >> c[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

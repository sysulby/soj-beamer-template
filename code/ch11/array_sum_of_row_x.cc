#include <iostream>

using namespace std;

int a[105][105];

int main() {
  int n, m;
  cin >> n >> m;
  // 输入 a 数组，从 1 开始储存
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  int x, sum = 0;
  cin >> x;
  for (int j = 1; j <= m; j++) sum += a[x][j];
  cout << sum << endl;

  return 0;
}

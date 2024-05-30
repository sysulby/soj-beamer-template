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
  int pos1 = 0, pos2 = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (pos1 == 0 && pos2 == 0 || a[i][j] > a[pos1][pos2]) {
        pos1 = i;
        pos2 = j;
      }
    }
  }
  cout << a[pos1][pos2] << endl;
  cout << pos1 << " " << pos2 << endl;

  return 0;
}

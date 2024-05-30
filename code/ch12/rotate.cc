#include <iostream>

using namespace std;

int a[105][105];

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  for (int j = 1; j <= m; j++) {    // 输出第 j 列的所有元素
    for (int i = n; i >= 1; i--) {
        cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

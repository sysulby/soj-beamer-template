#include <iostream>

using namespace std;

int a[105][105][105];

int main() {
  int n, m, c;
  cin >> n >> m >> c;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      for (int k = 1; k <= c; k++) {
        cin >> a[i][j][k];
      }
    }
  }
  int maxv = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      for (int k = 1; k <= c; k++) {
        if (a[i][j][k] > maxv) {
          maxv = a[i][j][k];
        }
      }
    }
  }
  cout << maxv << endl;

  return 0;
}

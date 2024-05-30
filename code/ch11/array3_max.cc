#include <iostream>

using namespace std;

int a[105][105][105];

int main() {
  int n, m, h;
  cin >> n >> m >> h;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      for (int k = 1; k <= h; k++) {
        cin >> a[i][j][k];
      }
    }
  }
  int maxv = -1000000000;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      for (int k = 1; k <= h; k++) {
        if (a[i][j][k] > maxv) {
          maxv = a[i][j][k];
        }
      }
    }
  }
  cout << maxv << endl;

  return 0;
}

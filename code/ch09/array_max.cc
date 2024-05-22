#include <iostream>

using namespace std;

int a[105];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int maxv = -1000000000;
  for (int i = 1; i <= n; i++) {
    if (a[i] > maxv) {
      maxv = a[i];
    }
  }
  cout << maxv << endl;

  return 0;
}

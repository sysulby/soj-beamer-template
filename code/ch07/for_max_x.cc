#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int maxv = -1000000000, x;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (x > maxv) {
      maxv = x; // 攻擂成功，成为擂主
    }
  }
  cout << maxv << endl;

  return 0;
}

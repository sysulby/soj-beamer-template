#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    int tmp = i;
    do {
      if (tmp % 10 == 1) {
        cnt++;
      }
      tmp /= 10;
    } while (tmp != 0);
  }
  cout << cnt << endl;

  return 0;
}

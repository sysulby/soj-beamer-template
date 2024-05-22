#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    do {
      int r = i % 10;
      i /= 10;
      if (r == 1) {
        cnt++;
      }
    } while (i != 0);
  }
  cout << cnt << endl;

  return 0;
}

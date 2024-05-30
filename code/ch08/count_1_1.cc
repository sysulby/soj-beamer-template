#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    do {
      if (i % 10 == 1) {
        cnt++;
      }
      i /= 10;
    } while (i != 0);
  }
  cout << cnt << endl;

  return 0;
}

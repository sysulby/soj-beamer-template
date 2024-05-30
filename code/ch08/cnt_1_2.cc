#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0, tmp = n;
  do {
    if (tmp % 10 == 1) {
      cnt++;
    }
    tmp /= 10;
  } while (tmp != 0);
  cout << n << " " << cnt << endl;

  return 0;
}

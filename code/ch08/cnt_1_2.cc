#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0, tmp = n;
  do {
    int r = tmp % 10;
    tmp /= 10;
    if (r == 1) {
      cnt++;
    }
  } while (tmp != 0);
  cout << n << " " << cnt << endl;

  return 0;
}

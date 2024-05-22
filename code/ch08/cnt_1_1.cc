#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  do {
    int r = n % 10;
    n /= 10;
    if (r == 1) {
      cnt++;
    }
  } while (n != 0);
  cout << n << " " << cnt << endl;

  return 0;
}

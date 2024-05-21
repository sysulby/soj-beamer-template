#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  do {
    if (n % 10 == 1) {
      cnt++;
    }
    n /= 10;
  } while (n != 0);
  cout << n << " " << cnt << endl;

  return 0;
}

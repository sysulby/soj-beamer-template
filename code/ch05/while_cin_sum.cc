#include <iostream>

using namespace std;

int main() {
  int sum = 0, x;
  while (cin >> x && x != 0) {
    sum += x;
  }
  cout << sum << endl;

  return 0;
}

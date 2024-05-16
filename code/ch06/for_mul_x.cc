#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long mul = 1, x;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    mul *= x;
  }
  cout << mul << endl;

  return 0;
}

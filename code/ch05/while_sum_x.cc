#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0, x;
  while (n > 0) {
    cin >> x; // 输入 x
    sum += x; // 相当于 sum = sum + x
    n--;
  }
  cout << sum << endl;

  return 0;
}

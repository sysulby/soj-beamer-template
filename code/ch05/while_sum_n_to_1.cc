#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  while (n > 0) {
    sum += n; // 相当于 sum = sum + n
    n--;
  }

  return 0;
}

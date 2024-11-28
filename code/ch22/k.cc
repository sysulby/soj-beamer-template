#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 1) return 1;
  return factorial(n - 1) * n;
}

int main() {
  int k;
  cin >> k;
  cout << factorial(k) << endl;

  return 0;
}
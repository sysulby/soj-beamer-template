#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  
  // i * i <= n 相当于 i <= sqrt(n)
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  if (isPrime(n)) cout << "yes" << endl;
  else cout << "no" << endl;
  return 0;
}
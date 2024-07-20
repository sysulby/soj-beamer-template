#include <iostream>

using namespace std;

void sayHello(int n) {
  for (int i = 1; i <= n; i++) {
    cout << "hello, world" << endl;
  }
}

int main() {
  int n;
  cin >> n;
  sayHello(n);
  return 0;
}
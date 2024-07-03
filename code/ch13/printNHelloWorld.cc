#include <iostream>

using namespace std;

void print(int n) {
  for (int i = 1; i <= n; i++) {
    cout << "hello world" << endl;
  }
}

int main() {
  print(5);

  return 0;
}
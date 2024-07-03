#include <iostream>

using namespace std;

void print() {
  cout << "hello world" << endl;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    print();
  }
  return 0;
}
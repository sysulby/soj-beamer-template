#include <iostream>

using namespace std;

int main() {
  int n = 3;
  do {
    cout << "hello" << endl;
    n--; // 在每次循环中，n 的值都会减 1
  } while (n > 0);

  return 0;
}

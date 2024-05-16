#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a >= b && a >= c) {        // a 最大的情况
    cout << a << endl;
  } else if (b >= a && b >= c) { // b 最大的情况
    cout << b << endl;
  } else {                       // c 最大的情况
    cout << c << endl;
  }

  return 0;
}

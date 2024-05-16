#include <iostream>

using namespace std;

int main() {
  int y;
  cin >> y;
  bool a = (y % 4 == 0 && y % 100 != 0); // 普通闰年
  bool b = (y % 400 == 0);               // 世纪闰年
  if (a || b) {
    cout << y << " is leap year" << endl;
  } else {
    cout << y << " is not leap year" << endl;
  }

  return 0;
}

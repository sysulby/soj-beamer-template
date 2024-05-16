#include <iostream>

using namespace std;

int main() {
  int y;
  cin >> y;
  // 闰年的判断条件：
  //   年份是 4 的倍数且不是 100 的倍数 或 是 400 的倍数
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
    cout << y << " is leap year" << endl;
  } else {
    cout << y << " is not leap year" << endl;
  }

  return 0;
}

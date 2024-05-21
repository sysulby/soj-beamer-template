#include <iostream>

using namespace std;

int a[8] = {71, 80, 62, 91, 99, 82, 43, 53};

int main() {
  int x, y;
  cin >> x >> y;
  // 交换 x 与 y 的成绩
  int tmp = a[x];
  a[x] = a[y];
  a[y] = tmp;
  // 输出所有成绩
  cout <<
    a[0] << " " << a[1] << " " << a[2] << " " <<
    a[3] << " " << a[4] << " " << a[5] << " " <<
    a[6] << " " << a[7] << " " << endl;

  return 0;
}

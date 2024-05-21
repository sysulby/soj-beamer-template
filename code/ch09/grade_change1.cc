#include <iostream>

using namespace std;

int a[8] = {71, 80, 62, 91, 99, 82, 43, 53};

int main() {
  int k, x;
  cin >> k >> x;
  a[k] += x; // 修改 k 号同学的成绩
  cout << a[k] << endl;

  return 0;
}

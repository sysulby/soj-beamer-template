#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a, b;
  while (n > 0) {
    cin >> a >> b; // 输入校内学习时长 a，校外学习时长 b
    cout << a + b << endl; // 输出一天的总学习时长
    n--;
  }

  return 0;
}

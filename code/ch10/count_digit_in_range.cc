#include <iostream>

using namespace std;

int cnt[10];       // cnt[d] 记录数码 d 出现的次数

int main() {
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    int x = i;     // 使用 i 的副本 x 进行拆分
    do {
      cnt[x%10]++; // 当前最低位的数码个数加一
      x /= 10;
    } while (x != 0);
  }
  for (int i = 0; i < 10; i++) cout << cnt[i] << " ";
  cout << endl;

  return 0;
}

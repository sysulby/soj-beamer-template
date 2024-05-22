#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long Sn = 0, Ai = 0;
  for (int i = 1; i <= n; i++) {
    Ai += i;  // 当前的 Ai 为 A_{i-1} + i
    Sn += Ai; // 将求得的 Ai 累加到 Sn 中
  }
  cout << Sn << endl;

  return 0;
}

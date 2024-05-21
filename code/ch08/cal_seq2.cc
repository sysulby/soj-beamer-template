#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long Sn = 0, Ai;
  for (int i = 1; i <= n; i++) {
    // 用于累加 1～i 的累加器 Ai，需要初始化为 0
    Ai = 0;
    for (int j = 1; j <= i; j++) {
      Ai += j;
    }
    Sn += Ai; // 将求得的 Ai 累加到 Sn 中
  }

  return 0;
}

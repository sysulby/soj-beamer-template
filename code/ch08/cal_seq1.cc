#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long Sn = 0;
  for (int i = 1; i <= n; i++) {
    int Ai = 0; // 用于累加 1～i 的累加器，需要初始化为 0
    for (int j = 1; j <= i; j++) {
      Ai += j;
    }
    Sn += Ai;   // 将求得的 Ai 累加到 Sn 中
  }
  cout << Sn << endl;

  return 0;
}

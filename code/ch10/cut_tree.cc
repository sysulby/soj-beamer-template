#include <iostream>

using namespace std;

bool cut[10005];

int main() {
  int l, m;
  cin >> l >> m;
  int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;                              // 移除范围
    for (int j = a; j <= b; j++) cut[j] = true; // 标记移除
  }
  int cnt = 0;
  for (int i = 0; i <= l; i++) {
    if (!cut[i]) cnt++;                         // 统计余下的树
  }
  cout << cnt << endl;

  return 0;
}

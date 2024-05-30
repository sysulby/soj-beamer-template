#include <iostream>

using namespace std;

int a[105], b[105];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  int m;
  cin >> m;
  for (int i = 1; i <= m; i++) cin >> b[i];
  for (int i = 1; i <= n; i++) {
    int cnt = 0;                   // 重新声明 a[i] 的计数器
    for (int j = 1; j <= m; j++) { // 遍历 b 班的每一个学生 b[j]
        if (b[j] > a[i]) cnt++;
    }
    cout << cnt << " ";            // 数完 a[i] 后马上输出
  }

  return 0;
}

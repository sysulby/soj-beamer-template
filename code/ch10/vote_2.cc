#include <iostream>

using namespace std;

int cnt[15]; // cnt[x] 表示候选人 x 的票数

int main() {
  int n, m;
  cin >> n >> m;
  int x;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    cnt[x]++;
  }
  for (int i = 1; i <= m; i++) {
    cout << i << " " << cnt[i] << endl;
  }

  return 0;
}

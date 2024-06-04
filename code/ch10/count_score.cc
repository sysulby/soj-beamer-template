#include <iostream>

using namespace std;

int cnt[105];

int main() {
  int n, m;
  cin >> n >> m;
  int x;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    cnt[x]++;
  }
  for (int i = 0; i <= m; i++) {
    if (cnt[i]) cout << i << " " << cnt[i] << endl;
  }

  return 0;
}

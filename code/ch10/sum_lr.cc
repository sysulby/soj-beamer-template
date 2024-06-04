#include <iostream>

using namespace std;

int a[105];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  int l, r; // 表示从 a[l] 累加至 a[r]
  cin >> l >> r;
  int sum = 0;
  for (int i = l; i <= r; i++) sum += a[i];
  cout << sum << endl;

  return 0;
}

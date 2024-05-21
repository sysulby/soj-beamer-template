#include <iostream>

using namespace std;

int a[105];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += a[i];
  }
  cout << sum << endl;

  return 0;
}

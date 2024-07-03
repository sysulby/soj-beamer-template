#include <iostream>

using namespace std;

int a[110];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  int x;
  cin >> x;
  for (int i = 1; i <= n; i++) {
    if (a[i] == x) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
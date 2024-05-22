#include <iostream>

using namespace std;

int a[105];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int pos = 0;
  for (int i = 1; i <= n; i++) {
    if (pos == 0 || a[i] > a[pos]) {
      pos = i;
    }
  }
  cout << a[pos] << " " << pos << endl;

  return 0;
}

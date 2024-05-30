#include <iostream>

using namespace std;

int a[105];

int main() {
  int n = 0, x;
  while (cin >> x && x) {
    n++;
    a[n] = x;
  }
  for (int i = n; i >= 1; i--) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}

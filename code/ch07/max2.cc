#include <iostream>
using namespace std;

int main() {
  int n, x, Max = -1e9;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (x > Max) {
      Max = x;
    }
  }
  cout << Max << endl;
  return 0;
}

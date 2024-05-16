#include <iostream>
using namespace std;

int main() {
  int n, x, Max;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (i == 1 || x > Max) {
      Max = x;
    }
  }
  cout << Max << endl;
  return 0;
}

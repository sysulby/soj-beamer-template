#include <iostream>
#include <iomanip>

using namespace std;

double b[] = {28.9, 78.5, 35.4, 43.6, 56}; // 录入单价

int main() {
  int n, k, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> k >> x;
    cout << fixed << setprecision(2) << b[k] * x << endl;
  }

  return 0;
}

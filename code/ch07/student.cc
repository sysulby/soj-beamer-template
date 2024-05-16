#include <iostream>

using namespace std;

int main() {
  int n, x, y;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x >> y;
    if (x >= 90 && y >= 90) {
      cout << "Good Job" << endl;
    } else {
      cout << "Study Harder" << endl;
    }
  }
  
  return 0;
}

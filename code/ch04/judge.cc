#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n > 0) {
    if (n % 2 == 0) {
      cout << "even" << endl;
    } else {
      cout << "odd" << endl;
    }
  } else if (n == 0) {
    cout << "zero" << endl;
  } else {
    cout << "negative" << endl;
  }

  return 0;
}

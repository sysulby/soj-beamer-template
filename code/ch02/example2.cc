#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  cout << "length of rectangle: ";
  cout << fixed << setprecision(2) << a << endl;
  cout << "width of rectangle: ";
  cout << fixed << setprecision(2) << b << endl;

  return 0;
}

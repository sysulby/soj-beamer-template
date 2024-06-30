#include <iostream>
#include <iomanip>

using namespace std;

double ladder_shaped(double a, double b, double h) {
  return (a + b) * h / 2;
}

int main() {
  double x, y, z;
  cin >> x >> y >> z;
  double size = ladder_shaped(x, y, z);
  cout << fixed << setprecision(2) << size << endl;
  return 0;
}
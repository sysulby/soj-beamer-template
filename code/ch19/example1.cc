#include <iostream>
using namespace std;

struct Student {
  string name;
  double s1, s2, sum;
};

int main() {
  Student a;
  cin >> a.name >> a.s1 >> a.s2;
  a.sum = a.s1 + a.s2;
  cout << a.name << " " << a.s1 << " " << a.s2 << " "
       << a.sum << endl;
  return 0;
}

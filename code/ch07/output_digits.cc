#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  do {
    int r = n % 10; // 取出最低位
    n /= 10;        // 抹去最低位
    cout << r << " ";
  } while (n != 0);
  
  return 0;
}

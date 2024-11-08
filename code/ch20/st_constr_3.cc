#include <iostream>
using namespace std;

struct Student {
  string name;
  int id, score;
  // 构造函数
  Student() {
    id = 1;
    score = 60;
  }
};

int main() {
    Student a;
    cout << a.score << endl;    // 输出 60

    return 0;
}
struct Student {
  string name;
  int id, score;
  // 构造函数
  Student() {
    id = score = 0;
  }
  Student(string na, int i, int s) {
    name = na;
    id = i;
    score = s;
  }
};

int main() {
  Student a("Tom", 1, 80);
  Student b;

  return 0;
}
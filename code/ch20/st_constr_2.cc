struct Student {
  string name;
  int id, score;
  // 构造函数
  Student() {
    id = score = 0;
  }
};

int main() {
  Student a;
  cout << a.score << endl;
  // 输出 0

  return 0;
}
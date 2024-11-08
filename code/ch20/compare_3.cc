struct Student {
  string name;
  int id, score;
  void input() {
    cin >> name >> id >> score 
  }
  bool operator < (const Student &o) const {
    return score < o.score;
  }
};

int main() {
    Student a, b;
    a.input();
    b.input();
    // 学生 a 调用了 < 运算符函数
    // 如果 a 的分数比 b 小，就返回 true，否则返回 false
    if (a < b) cout << a.name << endl;
    else cout << b.name << endl;
}
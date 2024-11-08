struct Student {
    string name;
    int id, score, d; // d 表示该学生与平均分的差距
    Student() {
      score = 60;     // 先假设每个学生的分数都是平均分
    }
    void input() {
      cin >> name >> id >> d;
      score += d;     // 通过 d 计算出该学生真实的 score
    }
    void output() {
      cout << name << " " << id << " " << score << endl;
    }
};

Student s[110];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) s[i].input();
  for (int i = 0; i < n; i++) s[i].output();
  return 0;
}
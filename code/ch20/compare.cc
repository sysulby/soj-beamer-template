struct Student {
  string name;
  int id, score;
  void input() {
    cin >> name >> id >> score 
  }
  bool operator < (const Student &o) const {
    // 如果第一个学生的分数比较小：
    if (score < o.score) return true;
    else return false;
  }
};
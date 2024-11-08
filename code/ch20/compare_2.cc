struct Student {
  string name;
  int id, score;
  void input() {
    cin >> name >> id >> score 
  }
  bool operator < (const Student &o) const {
    // 如果第一个学生的分数比较小，
    // 由于 score < o.score 结果为 true，直接返回
    // 否则 score < o.score 结果为 false，也直接返回
    return score < o.score;
  }
};

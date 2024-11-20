struct Student {
  string name;
  int id, score;
  bool operator > (const Student &o) const {
    // 能使用 score 的前提是 score 不同
    if (score != o.score) return score > o.score;
    // score 相同时才使用 name 做比较
    else return name > o.name;
  }
};

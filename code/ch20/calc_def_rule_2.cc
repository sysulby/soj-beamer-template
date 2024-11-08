struct Student {
  string name;
  int id, score;
  bool operator < (const Student &o) const {
    // 设计比较规则：
    if (score < o.score) return true;
    else return false;
  }
};

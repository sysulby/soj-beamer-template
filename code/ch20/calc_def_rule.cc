struct Student {
  string name;
  int id, score;
  bool operator < (const Student &o) const {
    // 设计比较规则：
    // 如果 自己 < 形参，返回 true
    // 否则 返回 false
  }
};

struct Student {
  string name;
  int id, score;
  bool operator < (const Student &o) const {
    // 形参 o 有成员变量 o.name, o.id, o.score
    return 运算结果
  }
};

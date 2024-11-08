struct Student {
  string name;
  int id, score;
  void input() {
    cin >> name >> id >> score 
  }
  bool operator >= (const Student &o) const {
    return score >= o.score;
  }
};

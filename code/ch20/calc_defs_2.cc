struct Student {
  string name;
  int id, score;
  bool operator > (const Student &o) const {
    return score > o.score;
  }
  bool operator == (const Student &o) const {
    return score == o.score;
  }
  bool cmp2(const Student &o) const {
    return name > o.name;
  }
};

struct Student {
  string name;
  double s1, s2, sum;
  void input() {
    cin >> name >> s1 >> s2;
  }
  void calc() {
    sum = s1 + s2;
  }
  void output() {
    cout << name << " " << sum << endl;
  }
};

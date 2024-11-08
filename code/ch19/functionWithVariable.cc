struct Student {
  string name;
  double s1, s2, sum;
  void input() {
    cin >> name >> s1 >> s2;
    sum = s1 + s2;
  }
  void output(double avg) {
    if (sum > avg) cout << name << "高于均分" << endl;
    else cout << name << "继续加油" << endl;
  }
};
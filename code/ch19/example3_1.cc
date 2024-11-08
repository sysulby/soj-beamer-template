struct Student {
  string name;
  double s1, s2, sum;
  void input() {
    cin >> name >> s1 >> s2;
    sum = s1 + s2;
  }
  bool isExcellent(double score) {
    if (sum > score) return true;
    else return false;
  }
};

int main() {
  double score;
  cin >> score;
  Student a;
  a.input();
  if (a.isExcellent(score)) cout << "Excellent" << endl;
  else cout << "Keep going" << endl;
  return 0;
}

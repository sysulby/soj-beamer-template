struct Student {
  string name;
  double s1, s2, sum;
};

bool isExcellent(double score, Student a) {
  if (a.sum > score) return true;
  else return false;
}

int main() {
  double score;
  cin >> score;
  Student a;
  cin >> a.name >> a.s1 >> a.s2;
  a.sum = a.s1 + a.s2;
  if (isExcellent(score, a)) cout << "Excellent" << endl;
  else cout << "Keep going" << endl;
  return 0;
}

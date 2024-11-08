struct Student {
  string name;
  double s1, s2, sum;
  void input() {
    cin >> name >> s1 >> s2;
    sum = s1 + s2;
  }
  void output() {
    cout << name << " " << sum << endl;
  }
};

Student a[110];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) a[i].input();
  for (int i = 0; i < n; i++) a[i].output();
  return 0;
}

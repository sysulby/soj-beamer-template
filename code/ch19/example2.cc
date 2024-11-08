struct Student {
  string name;
  double s1, s2, sum;
};

Student a[110];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].name >> a[i].s1 >> a[i].s2;
    a[i].sum = a[i].s1 + a[i].s2;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i].name << " " << a[i].sum << endl;
  }
  return 0;
}

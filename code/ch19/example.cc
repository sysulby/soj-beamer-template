double calcSum(Student a) {
  return a.s1 + a.s2;
}

int main() {
  Student a;
  cin >> a.name >> a.s1 >> a.s2;
  cout << calcSum(a) << endl;
  return 0;
}

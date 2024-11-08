int main() {
  Student a;
  cin >> a.name >> a.s1 >> a.s2;
  a.sum = a.s1 + a.s2;
  a.output();
  cout << a.name << " " << a.sum << endl;
  return 0;
}
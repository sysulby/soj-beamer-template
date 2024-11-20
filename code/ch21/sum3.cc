int sum2(int a, int b) {
  return a + b;
}
int sum3(int a, int b, int c) {
  return sum2(a, b) + c;
}
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << sum3(a, b, c) << endl;
  return 0;
}

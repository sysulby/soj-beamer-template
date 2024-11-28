void mySwap(int &x, int &y) {
  int tmp = x;
  x = y;
  y = tmp;
}
int main() {
  int a, b;
  cin >> a >> b;
  mySwap(a, b);
  cout << a << " " << b << endl;
  return 0;
}

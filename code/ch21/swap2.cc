void mySwap(int *pa, int *pb) {
  int tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}
int main() {
  int a, b;
  cin >> a >> b;
  mySwap(&a, &b);
  cout << a << " " << b << endl;
  return 0;
}

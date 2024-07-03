// #include ...

void mySwap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int x = 1, y = 2;
  mySwap(x, y);
  cout << x << " " << y << endl;
  return 0;
}
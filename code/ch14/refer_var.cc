// #include ...

int main() {
  int x = 1;
  int &y = x;
  y = 2;
  cout << x << endl;
  cout << y << endl;

  return 0;
}
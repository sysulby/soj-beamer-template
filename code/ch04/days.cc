// #include ...

int main() {
  int days = 365, y;
  cin >> y;
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
    days++;
  }
  cout << days << endl;

  return 0;
}

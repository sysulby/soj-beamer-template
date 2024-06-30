// #include ...

int getSum(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  int x;
  cin >> x;
  int ans = getSum(x);
  cout << ans << endl;
  return 0;
}
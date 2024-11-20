int main() {
  int n;
  cin >> n;
  Time sum = {0, 0}; // 初始化：sum 的小时数和分钟数都为 0
  for (int i = 1; i <= n; i++) {
    Time tmp;
    tmp.input();
    sum = sum + tmp;
  }
  sum.output();

  return 0;
}
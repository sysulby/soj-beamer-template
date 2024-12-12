// 函数功能：返回 x 的“精致度”
int calc(int x) {
  // 最简子问题
  if (x == 1) return 1;

  int sum = 0;
  for (int i = 1; i < x; i++) { // 枚举 x 的所有真因子
    if (x % i == 0) sum += calc(i);
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  cout << calc(n) << endl;

  return 0;
}
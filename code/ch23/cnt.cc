// 函数功能：返回 x 只奶牛最终会分成多少群
void cnt(int x) {
  // 最简子问题：不能分群，1 群 x 只奶牛留在路口
  if (x == 1 || x % 2 == 0) return 1;
  // 可以分群的情况：两群的数量分别为 a 和 b
  int a = (x - 1) / 2, b = x - a;
  // x 只奶牛最终分成的群数 
  // = a 只最终分的群数 + b 只最终分的群数
  return cnt(a) + cnt(b);
}

int main() {
  int n;
  cin >> n;
  cout << cnt(n) << endl;
  return 0;
}
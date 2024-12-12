// 函数功能：输出一群 x 只奶牛的分群过程
void separate(int x) {
  // 最简子问题
  if (x == 1 || x % 2 == 0) return ;
  // 可以分群的情况：
  // 计算出 x 只奶牛分出的两群数量
  int a = (x - 1) / 2, b = x - a;
  // 输出本轮分裂情况
  cout << x << ": " << a << " " << b << endl;
  // 调用函数列出 a 和 b 后续的分裂过程
  separate(a);
  separate(b);
}

int main() {
  int n;
  cin >> n;
  separate(n);
  return 0;
}
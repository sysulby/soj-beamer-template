// 返回编号 1~x 的圆盘从 st柱“汉诺移”到 tg柱的移动步数
int hanoiCnt(int x, char st, char tg, char o) {
  // 最简子问题：圆盘编号为 0 时，不需要移动
  if (x == 0) return 0;

  int cnt = 0;
  // 编号 1~x-1 的圆盘从 st柱“汉诺移”到 o柱的移动步数
  cnt += hanoiCnt(x - 1, st, o, tg);
  // 编号 x 的圆盘从 st柱移动到 tg柱需要一步
  cnt++;
  // 编号 1~x-1 的圆盘从 o柱“汉诺移”到 tg柱的移动步数
  cnt += hanoiCnt(x - 1, o, tg, st);
  return cnt;
}

int main() {
  int n;
  cin >> n;
  cout << hanoiCnt(n, 'A', 'C', 'B') << endl;
}
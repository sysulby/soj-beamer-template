// 输出编号 1~x 的圆盘从 st柱“汉诺移”到 tg柱的移动方案
void hanoiMove(int x, char st, char tg, char o) {
  // 最简子问题：圆盘编号为 0 时，不需要移动
  if (x == 0) return ;

  // 输出编号 1~x-1 的圆盘从 st柱“汉诺移”到 o柱的方案
  hanoiMove(x - 1, st, o, tg);
  // 输出编号 x 的圆盘从 st柱移动到 tg柱的操作，直接输出
  printf("Move %d from %c to %c\n", x, st, tg);
  // 输出编号 1~x-1 的圆盘从 o柱“汉诺移”到 tg柱的方案
  hanoiMove(x - 1, o, tg, st);
}
int query(int x) {
  // 判断当前为最简子问题时,
  // 不需要再调用函数
  if (x == 16) return 1;
  return query(x - 1) + 1;
}
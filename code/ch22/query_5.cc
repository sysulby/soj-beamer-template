int query(int x) {
  // 结束条件
  if (x == 16) return 1;
  // 自我调用
  return query(x-1) + 1;
}
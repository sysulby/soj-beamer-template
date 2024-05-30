// #include ...

bool cut[10005];

int main() {
  int l, m;
  cin >> l >> m;
  int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;      // 输入 a、b，表示移除的范围
    for (int j = a; j <= b; j++) {
      cut[j] = true;    // 表示将位置 j 上的树标记移除
    }
  }
  int cnt = 0;
  for (int i = 0; i <= l; i++) {
    if (!cut[i]) cnt++; // 统计未移除的树的数量
  }
  cout << cnt << endl;

  return 0;
}

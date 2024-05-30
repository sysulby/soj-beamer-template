int cnt[105][105]; // cnt[i][j]:记录第 i 行第 j 列出现该点的次数

int main() {
  int n;
  cin >> n;
  int x, y;
  for (int i = 1; i <= n; i++) {
    cin >> x >> y;
    cnt[x][y]++;
  }
  int mx = 0; // 打擂台找最大值，行和列范围都是 0~99
  for (int i = 0; i <= 99; i++) {
    for (int j = 0; j <= 99; j++) {
        if (cnt[i][j] > mx) {
            mx = cnt[i][j];
        }
    }
  }
  cout << mx << endl;

  return 0;
}

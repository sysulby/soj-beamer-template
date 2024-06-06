int cnt[105][105]; // cnt[i][j]:记录点(i, j) 的出现次数

int main() {
  int n;
  cin >> n;
  int x, y;
  for (int i = 1; i <= n; i++) {
    cin >> x >> y;
    cnt[x][y]++;
  }
  int maxv = 0; 
  for (int i = 0; i <= 99; i++) { // 点(i, j) 的范围都是 0 ~ 99
    for (int j = 0; j <= 99; j++) {
        if (cnt[i][j] > maxv) {
            maxv = cnt[i][j];
        }
    }
  }
  cout << maxv << endl;

  return 0;
}

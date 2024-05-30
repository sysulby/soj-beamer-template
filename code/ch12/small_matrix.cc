int a[105][105];

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  int x, y, r, c;
  cin >> x >> y >> r >> c;
  int sum = 0;
  for (int i = x; i < x + r; i++) {
    for (int j = y; j < y + c; j++) {
        sum += a[i][j];
    }
  }
  cout << sum << endl;
  
  return 0;
}

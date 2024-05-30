// #include ...

int a[105][105];

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  int maxv = -1000000000;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i][j] > maxv) maxv = a[i][j];
    }
  }
  cout << maxv << endl;

  return 0;
}

// #include ...

int a[105][105];

int main() {
  int n, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i + j == n + 1) sum += a[i][j];
    }
  }
  cout << sum << endl;

  return 0;
}

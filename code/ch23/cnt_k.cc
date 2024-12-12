int k;
int cnt(int x) {
  int a = (x - k) / 2, b = x - a;
  if (a <= 0 || (x - k) % 2 != 0) return 1;
  return cnt(a) + cnt(b);
}

int main() {
  int n;
  cin >> n >> k;
  cout << cnt(n) << endl;
  return 0;
}
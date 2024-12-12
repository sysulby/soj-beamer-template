int hanoiCnt(int x) {
  if (x == 1) return 1;

  int cnt = 0;
  cnt += hanoiCnt(x - 1);
  cnt++;
  cnt += hanoiCnt(x - 1);
  return cnt;
}

int main() {
  int n;
  cin >> n;
  cout << hanoiCnt(n);
  cout << endl;
}
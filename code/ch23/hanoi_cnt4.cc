int hanoiCnt(int x) {
  if (x == 1) return 1;

  return hanoiCnt(x-1)*2+1;
}

int main() {
  int n;
  cin >> n;
  cout << hanoiCnt(n);
  cout << endl;
}
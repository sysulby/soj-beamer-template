// #include ...

// 函数功能：返回 n 位二进制数 b[0 ~ n-1] 的十进制数值
int bin2dec(int b[], int n) {
  int sum = 0, w = 1;
  for (int i = n - 1; i >= 0; i--) {
    sum += b[i] * w;
    w *= 2;
  }
  return sum;
}

int bin[35];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> bin[i];
  cout << bin2dec(bin, n) << endl;
  return 0;
}
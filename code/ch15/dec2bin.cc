// #include ...

int bin[35];
// 函数功能：输出十进制 x 的二进制表示
void dec2bin(int x) {
  int siz = 0; // 记录二进制的位数
  do {
    bin[siz] = x % 2;
    siz++;
    x /= 2;
  } while (x);
  // 逆序输出
  for (int i = siz - 1; i >= 0; i--) cout << bin[i];
  cout << endl;
}

int main() {
  int x;
  cin >> x;
  dec2bin(x);
  return 0;
}
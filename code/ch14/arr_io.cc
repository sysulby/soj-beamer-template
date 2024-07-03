// #include ...

int A[110];
// 函数功能：一维数组的输入
void input(int a[], int n) {
  for (int i = 1; i <= n; i++) cin >> a[i];
}

// 函数功能：一维数组的输出
void output(int a[], int n) {
  for (int i = 1; i <= n; i++) cout << a[i] << endl;
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  input(A, n);
  output(A, n);

  return 0;
}
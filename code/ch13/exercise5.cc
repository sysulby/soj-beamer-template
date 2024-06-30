// #include ...

int getSum(int n) {
  long long sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  cout << getSum(1000000) << endl;
  return 0;
}
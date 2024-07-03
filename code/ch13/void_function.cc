// #include ...

void function1() {
  cout << "function 1" << endl;
}

void function2(int n) {
  for (int i = 1; i <= n; i++) {
    cout << "function 2" << endl;
  }
}

int main() {
  function1();
  function2(3);
  return 0;
}
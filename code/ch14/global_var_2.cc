// #include ...

int a = 1;
void f() {
  cout << "f(): " << a << endl;
}

int main() {
  cout << "main(): " << a << endl;
  f();
  int a = 2;
  cout << "main(): " << a << endl;

  return 0;
}

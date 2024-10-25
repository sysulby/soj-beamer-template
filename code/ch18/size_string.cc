string s = "hello";
cout << s.size() << endl;       // 输出 5

int len = s.length();           // len = 5
for (int i = 0; i < len; i++) { // 输出 "hello"
  cout << s[i];
}
s1 = "hi";
s2 = "hello";
cout << s1 + s2 << endl;    // 输出 "hihello"
cout << s2 + s1 << endl;    // 输出 "hellohi"
cout << s1 << endl;         // 输出 "hi"
cout << s2 << endl;         // 输出 "hello"

s1 += s2; // s1 变为 "hihello", s2 还是 "hello"
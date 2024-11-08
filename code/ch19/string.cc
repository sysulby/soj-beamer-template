string s;
cin >> s;           // 输入 "hello world"
                    // 存储的是 "hello"

getline(cin, s);    // 输入 "hello world"
                    // 存储的是 "hello world"

cout << s << endl;  // 整体输出

// 循环输出，输出长度为 n 的字符串
for (int i = 0; i < n; i++) cout << s[i]; 

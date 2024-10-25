char str[110];           // 数组要适当大一点

cin >> str;              // 输入 "hello world"
                         // 存储的是 "hello"

fgets(str, 110, stdin);  // 输入 "hello world" 并换行
                         // 存储的是 "hello world\n"

cout << str;             // 整体输出

                         // 输出前 5 个字符
for (int i = 0; i < 5; i++) cout << str[i];
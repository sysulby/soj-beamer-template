s = "hello";
cout << s.find("ell", 0);   // 输出 1
cout << s.find("l");        // 输出 2
cout << s.find("l", 3);     // 输出 3

// 判断字符串 s 中是否包含 s2
if (s.find(s2, 0) != string::npos)
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // kg 表示每行要输出的空格数量
    // xh 表示每行要输出的星号数量
    int kg = n - 1, xh = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= kg; j++) { // 输出 kg 空格
            cout << " ";
        }
        for (int j = 1; j <= xh; j++) { // 输出 xh 星号
            cout << "*";
        }
        cout << endl;
        kg--, xh += 2; // 下一行空格数 - 1，星号数 + 2
    }
    return 0;
}
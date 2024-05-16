#include <iostream>

using namespace std;

int main() {
    int n, Ai = 0;
    long long Sn = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        Ai += i;  // 当前的 Ai 为 A(i-1) + i
        Sn += Ai; // 将求得的 Ai 累加到 Sn 中
    }
    return 0;
}
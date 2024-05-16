#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        do {
            int r = tmp % 10;
            tmp /= 10;
            if (r == 1) cnt++;
        } while (tmp);
    }
    cout << cnt << endl;
    return 0;
}
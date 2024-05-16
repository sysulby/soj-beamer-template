#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        do {
            int r = i % 10;
            i /= 10;
            if (r == 1) cnt++;
        } while (i);
    }
    cout << cnt << endl;
    return 0;
}
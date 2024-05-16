#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    do {
        int r = n % 10;
        n /= 10;
        if (r == 1) cnt++;
    } while (n);
    cout << n << " " << cnt << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    int tmp = n;
    do {
        int r = tmp % 10;
        tmp /= 10;
        if (r == 1) cnt++;
    } while (tmp);
    cout << n << " " << cnt << endl;
    return 0;
}
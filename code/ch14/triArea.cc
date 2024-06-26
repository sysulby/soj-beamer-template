#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double triArea(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    double s1 = triArea(a, b, c);
    double s2 = triArea(c, d, e);
    double s3 = triArea(e, f, g);
    cout << fixed << setprecision(2) << s1 + s2 + s3 << endl;
    return 0;
}
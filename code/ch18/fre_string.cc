#include <iostream>
#include <string>

using namespace std;

string s[210];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> s[i];
  string t;
  cin >> t;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
      if (s[i] == t) cnt++;
  }
  cout << cnt << endl;

  return 0;
}
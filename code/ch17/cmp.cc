#include <iostream>
#include <cstring>

using namespace std;

char s[110], t[110];

int main() {
  cin >> s >> t; 
  if (strcmp(s, t) > 0) cout << ">" << endl;
  else if (strcmp(s, t) == 0) cout << "=" << endl;
  else cout << "<" << endl;

  return 0;
}
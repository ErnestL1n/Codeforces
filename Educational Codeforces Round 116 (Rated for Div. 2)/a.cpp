#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll bar(string& s, char x, char y) {
  ll res = 0;
  for (ll i = 0; i < s.size() - 1; ++i) {
    if (s[i] == x and s[i + 1] == y) {
      ++res;
    }
  }
  return res;
}

void foo() {
  string s;
  cin >> s;
  ll diff = bar(s, 'a', 'b') - bar(s, 'b', 'a');
  if (diff) {
    string tmp = s.substr(1);
    if (s[0] == 'a') {
      s = 'b' + tmp;
    } else {
      s = 'a' + tmp;
    }
  }
  cout << s << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    foo();
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void foo() {
  ll n;
  cin >> n;
  vector<vector<int>> s(5);
  vector<int> x(n);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 5; ++j) {
      int x;
      cin >> x;
      if (x == 1) {
        s[j].push_back(i);
      }
    }
  }
  for (int i = 0; i < 5; ++i) {
    if (s[i].size() >= n / 2) {
      for (int j = i + 1; j < 5; ++j) {
        if (s[j].size() < n / 2) {
          continue;
        }
        auto it = set_union(begin(s[i]), end(s[i]), begin(s[j]), end(s[j]),
                            x.begin());
        x.resize(it - x.begin());
        if (x.size() == n) {
          cout << "YES"
               << "\n";
          return;
        }
        x.clear();
      }
    }
  }
  cout << "NO"
       << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    foo();
  }
  return 0;
}
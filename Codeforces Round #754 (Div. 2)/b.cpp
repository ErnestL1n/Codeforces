#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 998244353;

void foo() {
  int n, cnt = 0, i, j;
  cin >> n;
  string binarystring;
  cin >> binarystring;
  set<int> s;
  for (i = 0, j = n - 1; i < j;) {
    if (binarystring[i] == '1' and binarystring[j] == '0') {
      s.insert(i + 1);
      s.insert(j + 1);
      ++i;
      --j;
      cnt += 2;
    }
    if (binarystring[i] == '0') {
      ++i;
    }
    if (binarystring[j] == '1') {
      --j;
    }
  }
  if (cnt == 0) {
    cout << 0 << "\n";
    return;
  }
  // cnt += i == j;
  if (i == j) {
    s.insert(i + 1);
    ++cnt;
  }
  cout << 1 << "\n" << cnt << " ";
  for (auto it = s.begin(); it != s.end(); ++it) {
    cout << *it << " ";
  }
  cout << "\n";
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
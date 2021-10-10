#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void foo() {
  ll n;
  cin >> n;
  string a, b;
  cin >> a >> b;
  bool flag = true;
  for (int i = 0; i < n; ++i) {
    if (a[i] == '1' and b[i] == '1') {
      flag = false;
    }
  }
  if (flag) {
    cout << "YES"
         << "\n";
  } else {
    cout << "NO"
         << "\n";
  }
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
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void foo() {
  ull n, k;
  cin >> n >> k;
  // ll x = 0b1;
  //   for (int i = 1; i <= n; ++i) {
  //     x += 1;
  //     cout << x << "\n";
  //   }
  ull res = 0, x = k, y = 1;
  while (x > 0) {
    if (x & 1) {
      res += y % 1000000007;
    }
    x >>= 1;
    y = (y * n) % 1000000007;
  }
  cout << res % 1000000007 << "\n";
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
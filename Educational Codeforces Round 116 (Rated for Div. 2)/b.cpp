#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void foo() {
  ll n, k, res = 0;
  cin >> n >> k;
  ll cur = 1;
  if (k == 1) {
    cout << n - 1 << "\n";
    return;
  }
  while (k >= cur and n > cur) {
    cur *= 2;
    ++res;
  }
  cur = (n - cur + k - 1) / k;
  res += cur;
  cout << res << "\n";
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
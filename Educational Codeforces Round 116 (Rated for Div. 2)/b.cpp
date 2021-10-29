#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void foo() {
  ll n, k, res = 0;
  cin >> n >> k;
  ll cur = 0;
  if (k == 1) {
    cout << n - 1 << "\n";
    return;
  }
  ll times = ceil(log(k) / log(2));

  res += times;
  // cout << times << "\n";
  cur += pow(2, times);
  if (n > cur) {
    ll times2 = (n - cur) / k;
    cur += times2 * k;
    res += times2;
  }

  cout << (cur >= n ? res : res + 1) << "\n";
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
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void foo() {
  ll n, h, cnt = 0;
  cin >> n >> h;
  ll f = -1, s = -1;
  for (ll i = 0; i < n; ++i) {
    ll x;
    cin >> x;
    if (x > f) {
      s = f;
      f = x;
    } else if (x > s) {
      s = x;
    }
  }
  ll ss = f + s;
  if (h <= f) {
    cout << 1 << "\n";
    return;
  } else if (h <= ss) {
    cout << 2 << "\n";
    return;
  }
  ll y = h / ss;
  cnt += 2 * y;
  h -= y * ss;
  if (h <= f and h > 0) {
    ++cnt;
    cout << cnt << "\n";
    return;
  } else if (h > 0) {
    cnt += 2;
    cout << cnt << "\n";
    return;
  }
  cout << cnt << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) foo();
  return 0;
}
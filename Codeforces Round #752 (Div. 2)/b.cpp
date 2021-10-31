#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// check if an increasing array
// bool bar(vector<ll>& arr) {
// for (int i = 0; i < arr.size() - 1; ++i) {
// if (arr[i] >= arr[i + 1]) {
// return false;
// }
// }
// return true;
// }

void foo() {
  int n;
  cin >> n;
  bool flag = true;
  // vector<ll> arr(n);
  int pre, x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (i == 0) {
      pre = x;
      continue;
    }
    if (pre >= x) {
      flag = false;
    }
    pre = x;
  }
  if (n % 2 == 0 or not flag) {
    cout << "YES"
         << "\n";
    // printf("%s", "YES");
    return;
  } else {
    cout << "NO"
         << "\n";
  }
  // printf("%s\n", (flag ? "NO" : "YES"));
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
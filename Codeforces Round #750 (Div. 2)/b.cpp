#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// TLE
// ll bar(vector<ll>& arr, ll n, ll target) {
// if (target < 0) {
// return 0;
// }
// vector<vector<ll>> dp(n + 1, vector<ll>(target + 1));
// for (ll i = 0; i <= n; ++i) {
// for (ll j = 0; j <= target; ++j) {
// if (i == 0) {
// if (j == 0) {
// dp[i][j] = 1;
// }
// } else {
// ll begin = n - i;
// if (arr[begin] > j) {
// continue;
// }
// if (j >= arr[begin]) {
// dp[i][j] = dp[i - 1][j - arr[begin]] + dp[i - 1][j];
// } else {
// dp[i][j] = dp[i - 1][j];
// }
// }
// }
// }
// return dp[n][target];
// }

void foo() {
  ll n, res = 0;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; ++i) {
    cin >> arr[i];
    if (arr[i] == 1) {
      ++res;
    }
  }
  for (ll i = 0; i < n; ++i) {
    if (arr[i] == 0) {
      res *= 2;
    }
  }

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
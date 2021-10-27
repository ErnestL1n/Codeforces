#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll times;

// vector<ll> bar(vector<ll> arr, vector<ll> cnt, ll& n) {
// vector<ll> tmp;
// for (ll i = 0; i < times; ++i) {
// for (ll j = 1; j <= n; ++j) {
// if (cnt[arr[j]] == arr[j]) {
// continue;
// }
// arr[j] = cnt[arr[j]];
// }
// tmp = cnt;
// for (ll j = 1; j <= 2000; ++j) {
// if (tmp[j] == 0 or cnt[j] == j) {
// continue;
// }
// ll x = tmp[j];
// cnt[x] += x;
// cnt[j] -= x;
// }
// }
// return arr;
// }

// vector<ll> han(vector<ll> arr, vector<ll> cnt, ll& k, ll& n) {
// vector<ll> tmp;
// for (ll i = 0; i < k; ++i) {
// for (ll j = 1; j <= n; ++j) {
// if (cnt[arr[j]] == arr[j]) {
// continue;
// }
// arr[j] = cnt[arr[j]];
// }
// tmp = cnt;
// for (ll j = 1; j <= 2000; ++j) {
// if (tmp[j] == 0 or cnt[j] == j) {
// continue;
// }
// ll x = tmp[j];
// cnt[x] += x;
// cnt[j] -= x;
// }
// }
// return arr;
// }

int N, Q;
vector<int> A;
vector<vector<int>> V;
void foo() {
  cin >> N;
  A.resize(N);
  V.clear();
  for (auto &i : A) cin >> i;
  V.push_back(A);
  for (int i = 1;; i++) {
    vector<int> cnt(N + 1, 0), res;
    for (auto j : V.back()) cnt[j]++;
    for (auto j : V.back()) res.push_back(cnt[j]);
    if (res == V.back()) break;
    V.push_back(res);
  }
  cin >> Q;
  while (Q--) {
    int a, b;
    cin >> a >> b;
    cout << V[min(b, (int)V.size() - 1)][a - 1] << "\n";
  }
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
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void foo() {
  int n, x;
  cin >> n >> x;
  vector<int> a1;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    a1.push_back(a);
  }
  bool flag = true;
  vector<int> a2 = a1;
  sort(a2.begin(), a2.end());
  for (int i = n - x; i < x; ++i) {
    if (i - x < 0 and i + x >= a1.size() and a1[i] != a2[i]) {
      flag = false;
      break;
    }
  }
  if (flag) {
    cout << "Yes"
         << "\n";
    return;
  }
  cout << "No"
       << "\n";
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) foo();
  return 0;
}
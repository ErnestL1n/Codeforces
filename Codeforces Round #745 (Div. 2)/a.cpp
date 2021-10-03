#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void foo() {
  int n;
  cin >> n;
  int i;
  ull fact = 1;
  for (i = 3; i <= n * 2; ++i) {
    fact = (fact * i) % 1000000007;
  }
  cout << fact << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) foo();
  return 0;
}
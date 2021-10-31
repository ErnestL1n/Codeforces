#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// check if an increasing array
bool bar(vector<ll>& arr) {
  for (ll i = 0; i < arr.size() - 1; ++i) {
    if (arr[i] >= arr[i + 1]) {
      return false;
    }
  }
  return true;
}

void foo() {
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (int i = 0; i < arr.size(); ++i) {
    cin >> arr[i];
  }
  if (not bar(arr) or n % 2 == 0) {
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
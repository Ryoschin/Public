#include <bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

void faktorisi(llu n, int m) {
  int a[m];
  int i = 1;
  int j = 0;

  while (i < n) {
    if (n % i == 0) {
      a[j] = i;
      j++;
    }

    i++;
  }

  if (i * i == n) {
    a[j] = i;
  }

  if (j < m) {
    cout << "-";
  } else {
    cout << a[m - 1];
  }
}

int main() {
  llu n;
  int m;
  cin >> n >> m;
  faktorisi(n, m);
  return 0;
}

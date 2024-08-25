#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (true) {
    cin >> n;
    if (0 == n) {
      break;
    }

    while (9 < n) {
      ll x = 0;
      while (0 < n) {
        x += n % 10;
        n /= 10;
      }

      n = x;
    }

    cout << n << '\n';
  }

  return 0;
}
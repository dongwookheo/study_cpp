/*!
 * Relational operators
 * ==, !=, >=, >, <=, <
 * 사용 시 주의 사항)
 * - 부동 소수점형을 비교할 때, 조심
 */
#include <cmath>
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  double x(100 - 99.99);
  double y(10 - 9.99);

  // Not equal!!! Because floating number is expressed by sign, exponent, mantissa bits.
  if (x == y)
    cout << "Equal" << endl;
  else {
    if (x > y)
      cout << "x is bigger than y" << endl;
    else // y > x
      cout << "y is bigger than x" << endl;
  }

  // 비교하는 방법
  constexpr double epsilon = 1e-4;

  if (std::abs(x - y) < epsilon)
    cout << "Approximately equal" << endl;
  else
    cout << "Not equal" << endl;

  return 0;
}

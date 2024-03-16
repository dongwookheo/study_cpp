/*!
 * 증가/감소 연산자
 * ++, --
 * 전위 vs 후위
 *   - 전위: 전위 연산을 먼저 수행하고 해당 statement를 수행
 *   - 후위: statement를 수행하고 후위 연산을 수행
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  int32_t x = 5;

  cout << x++ + 5 << endl;
  x = 5;
  cout << ++x + 5 << endl;

  return 0;
}

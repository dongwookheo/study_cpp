/*!
 * Binary Numbers
 * - 컴퓨터는 전압의 높고 낮음을 통해 0과 1을 표현한다.
 *
 */
#include <cstdint>
#include <iostream>
int32_t main() {
  using namespace std;

  /**
   * 십진수
   * 0 1 2 3 4 5 6 7 8 9
   * 10 = 1 * 10^1 + 0 * 10^0
   * ...
   * 337 = 3 * 10^2 + 3 * 10^1 + 7 * 10^0
   *
   * 이진수
   * 0 1
   * 10 = 1 * 2^1 + 0 * 2^0 = 2
   * 11 = 1 * 2^1 + 1 * 2^0 = 3
   * 11 + 1 = 100 = 1 * 2^2 + 0 * 2^1 + 0 * 2^0 = 4
   *
   * 10진수 10을 2진수로 변환
   * 148 / 2 = 74 ... 0
   * 74 / 2 = 37 ... 0
   * 37 / 2 = 18 ... 1
   * 18 / 2 = 9 ... 0
   * 9 / 2 = 4 ... 1
   * 4 / 2 = 2 ... 0
   * 2 / 2 = 1 ... 0
   * 1 / 2 = 0 ... 1
   * 1001 0100
   *
   * 2진수를 10진수로 변환
   * 0101 1110
   * 0 * 2^7 + 1 * 2^6 + 0 * 2^5 + 1 * 2^4 + 1 * 2^3 + 1 * 2^2 + 1 * 2^1 + 0 * 2^0
   * 0 + 64 + 0 + 16 + 8 + 4 + 2 + 0 = 94
   *
   * 2진수의 덧셈
   * 0110 + 0111 = 1101 = 13
   *
   * 보수 (Complement)
   * e.g. -5
   * 5 = 0000 0101
   * 보수를 취하면, (0 -> 1, 1 -> 0)
   * 1111 1010
   * 1을 더하면, (1을 더하는 이유: 0의 보수는 1111 1111 인데 0의 표현 방식이 두 가지가 있어 이를 피하기 위해 1을 더함)
   * 1111 1011
   *
   * signed vs unsigned
   * 1001 1110 -> 0110 0001 + 1 = 0110 0010 = 98 * -1 = -98 (signed)
   * 1001 1110 = 128 + 16 + 8 + 4 + 2 = 158 (unsigned)
   * 둘 사이의 값이 차이가 많이 난다... 실수하지 않도록 주의
   */

  return 0;
}

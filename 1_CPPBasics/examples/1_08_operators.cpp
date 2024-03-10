/*!
 * Operator: 연산을 수행하는 기호 (Unary, Binary, Ternary)
 * Operand: 연산이 행해지는 인자
 *   e.g.) 1 + 2 에서는 '1', '2'가 operand, '+' 가 operator
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  int32_t x = 2; // x is a variable, 2 is a literal.
  cout << "Hello World!" << endl; // String is a literal.

  // Ternary operator: 삼항 연산자
  int32_t y = (x > 0) ? 234 : 2;
  cout << y << endl;

  return 0;
}
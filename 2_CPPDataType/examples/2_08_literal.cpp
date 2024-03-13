/*!
 * Literal constant
 * float 형의 경우, e.g. 3.14f; F
 * long double 형의 경우, e.g. 3.14l; L
 * unsigned int, 123u; U
 * long, 124l; L
 * long long, 234ll; LL
 * unsigned long, 234ul; UL
 * 가독성을 좋게 하기 위해, casting으로 명시를 해주는 경우도 있음!
 *
 * 중요) 8진수(Octal), 16진수(Hexa)
 * - 8진수: 앞에 0을 붙임  e.g. 012 == 10
 * - 16진수: 앞에 0x를 붙임  e.g. 0xFF == 255
 *   - 16진수는 2진수 표기법을 아주 간략히 표현할 수 있어 많이 사용됨
 *   e.g.) 0011 1010 1111 1111 -> 3AFF
 *
 * Binary literal (C++14 이후)
 * - 2진수의 입력이 바로 됨!
 * - 앞에 0b를 붙임.  e.g. 0b1010 == 10
 * - 가독성을 높이기 위해 컴파일러가 single quotation(')을 무시하도록 구현됨 e.g. 0b1010'1111'0001 가능
 *
 * 중요!) 코드 작성시 매직 넘버의 사용을 줄이는 것이 좋다.
 * int price = price_apple * 10; 보다는
 * const int num_apples = 10; int price = price_apple * num_apples; (better)
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  // Octal
  int32_t x = 012;
  cout << x << endl; // 10

  // Hexa
  int32_t y = 0xFF;
  cout << y << endl;

  // Binary literal (C++14)
  int32_t z = 0b1111'1010;
  cout << z << endl;

  // 매직 넘버의 사용을 피하자
  int32_t price_per_item = 10;
  int32_t num_items = 123;
  int32_t price = num_items * price_per_item;

  return 0;
}

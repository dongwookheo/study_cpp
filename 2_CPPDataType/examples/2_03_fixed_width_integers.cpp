/*!
 * Fixed-width Integers
 * - 플랫폼, 컴파일러마다 integer 자료형의 메모리의 크기가 다를 수 있다.
 * - 특히, 임베디드 시스템, 멀티 플랫폼 시스템에서는
 * - 고정 너비 정수형을 이용해서 명시적으로 작성해주는 것이 좋다!
 */
#include <cstdint> // iostream을 사용할 때에는 별도로 include 하지 않아도 된다!!
#include <iostream>

std::int32_t main(){
  int16_t i(5);
  int8_t myint = 65;
  std::cout << i << ' ' << myint << std::endl;

  // 8bit integer 중 빠른 것
  int_fast8_t fi(5);
  // 적어도 64bit 인 integer
  int_least64_t li(1235);

  std::cout << sizeof(fi) << ' ' << fi << std::endl;
  std::cout << sizeof(li) << ' ' << li << std::endl;

  return 0;
}

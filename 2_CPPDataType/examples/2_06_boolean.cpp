/*!
 * Boolean: true or false (1 or 0)
 *
 * 주의) cin으로 입력하는 경우, 1, 0으로 입력할 것.
 *   - 0이 아니면 true로 취급하긴 하나 컴파일러에 따라 다를 수 있으므로, 문제가 생길 수 있는 방식은 피해가자
 */
#include <cstdint>
#include <iostream>

bool isEqual(int a, int b);

int32_t main() {
  bool b1 = true; // Copy initialization
  bool b2(true); // Direct initialization
  bool b3{true}; // Uniform initialization
  b3 = false; // Assignment

  std::cout << b1 << std::endl;
  std::cout << std::boolalpha;
  std::cout << b2 << std::endl;
  std::cout << std::noboolalpha;
  std::cout << b3 << std::endl;

  // Logical operator (&&, ||, !)
  // not operator : 눈에 잘 안들어와서 안쓸 수 있으면 안쓰는게 좋을거 같다
  std::cout << !b1 << std::endl;
  std::cout << !false << std::endl;

  std::cout << (true && true) << std::endl;
  std::cout << (true && false) << std::endl;
  std::cout << (false || true) << std::endl;
  std::cout << (false || false) << std::endl;

  // if conditional statement
  if (3 > 1) {
    std::cout << "This is true" << std::endl;
    std::cout << "This is second true line" << std::endl;
  } else
    std::cout << "This is false" << std::endl;

  std::cout << std::boolalpha;
  std::cout << isEqual(1, 0) << std::endl;
  std::cout << isEqual(3, 3) << std::endl;

  return 0;
}

bool isEqual(int a, int b) {
  return (a == b);
}

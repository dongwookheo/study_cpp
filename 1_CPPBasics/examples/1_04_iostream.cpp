/*!
 * <<: output operator, output stream
 * >>: input operator, input stream
 * cin, cout: printf와 달리, 작성한 내용을 파일 입출력, 네트워킹에 이용할 수 있음
 */
#include <cstdint>
#include <cstdio>  // printf
#include <iostream>  // cout, cin, endl, ...

int32_t main() {
  // Studying cout
  int32_t x = 2024;
  double pi = 3.141592;

  std::cout << "I love programming\n";
  std::cout << "x is " << x << " pi is " << pi << std::endl;  // 변수의 출력도 가능

  std::cout << "abc" << "\t" << "def" << std::endl;
  std::cout << "ab" << "\t" << "cdef" << std::endl;  // '\t': 줄 맞춰 정렬

  std::cout << "\a";

  // Studying cin
  int32_t y(2134);
  std::cout << "Befor my input y: " << y << std::endl;
  std::cin >> y;  // 사용자의 예상치 못한 입력은 overflow등의 문제를 일으킬 수 있다. -> 입력 유효성 검증이 필요하다
  std::cout << "After my input y: " << y << std::endl;

  return 0;
}

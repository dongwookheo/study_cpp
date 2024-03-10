/*!
 * Void type
 * - return type 이 없을 때, 함수에 명시
 * - pointer와 자주 사용
 *
 * +) 자료형이 다를지라도 그들의 메모리 주소의 데이터 타입은 동일하다!
 */
#include <cstdint>
#include <iostream>

void myFunction() {
  std::cout << "Hello world!" << std::endl;
}

int32_t main() {
//  void v; // Error: void type의 변수는 선언할 수 없다!
  int32_t i = 123;
  float f = 123.455f;

  void *my_void;
  my_void = (void*)&i;
  my_void = (void*)&f;

  return 0;
}

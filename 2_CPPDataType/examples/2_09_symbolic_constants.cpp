/*!
 * Symbolic constants
 * - 변경하면 안되는 상수를 설정
 * - e.g. const int gravity{ 9.8 }; 이후 수정 시 컴파일 에러 발생
 *
 * 함수를 구현하는 과정에서 입력한 파라미터 값을 수정하는 것은 극히 드물다.
 * - const를 붙여 줌  e.g. void foo(const int a);
 * - 만일 정말 수정하더라도, 입출력을 명확히 해주기 위해 내부에 변수를 만들어 받아오는 식으로 구현...
 * 중요 +) 실질적으로 메모리 측면을 고려하여 void foo(const int& a);로 구현하는 경우가 대다수!
 *
 * 중요) 컴파일 타임 vs 런타임 (상수의 측면에서)
 * - 문법상 구분 짓기 위해, 컴파일 타임 상수에 constexpr을 사용
 *
 * 중요) C style로 상수를 매크로로 작성하는 것은 지양
 * - 해당 상수의 적용 범위가 너무 넓어짐 (해당 파일 전체)
 * - 디버깅이 힘들어진다 (cpp에선 해당 변수를 사용하는 근처에 선언해준다고 했다, 매크로의 경우는 코드 상단에 작성하는 경우가 많음)
 *
 * 중요) 보통 상수를 일반적인 변수와 구분해주기 위해, k_등의 접두사를 붙이는 경우가 있음
 * - 일반적인 코드의 확장을 위해, 파일을 따로 만들어 관리하기도 함~
 *   - 아래에 헤더파일로 관리하는 방식을 구현했다. 이때 장점은: 관리하기 편하고, 헤더의 값만 변경하면 되기 때문에 유지보수 good
 */
#include <cstdint>
#include <iostream>
#include "MY_CONSTANTS.h"

float calcWeight(const float& mass) {
  const float gravity(9.81f);
  return gravity * mass;
}

int32_t main() {
  using namespace std;

  // 향후 수정하지 못하도록 const를 붙여줌 -> 수정하려고 시도한다면 컴파일 에러
  const float mass{59.8f};
  cout << calcWeight(mass) << endl;

  // 컴파일 타임 (constexpr를 사용하면 명확하게 인지할 수 있다!)
  constexpr int32_t my_const(10);

  int32_t num;
  cin >> num;

  // 런타임 (constexpr 사용 불가!!! 컴파일 에러)
  const int32_t my_num(num);

  double radius;
  cin >> radius;
  double area = constants::pi * radius * radius;
  cout << "Area of circle: " << area << endl;


  return 0;
}

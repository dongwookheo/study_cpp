/*!
 * Comments(주석): 컴파일러가 무시하는 문장
 * 내가 기억하기 위해, 협업을 위해 기록하는 것이 필요하다
 * 해당 코드로 인해 추론하는 시간을 단축할 수 있다!
 *
 * 1. 프로그램 전체를 설명 - 무엇을 할지
 * 2. 함수 등에서 구현하는 단계에서의 설명 - 어떻게 구현할 지 (~~논문 참조 등)
 * 3. 문장 단위 - 해당 문장을 왜 넣었는지
 *   badcase) set sight 0
 *   bettercase) take potion, so sight is 0 등
 */
#include <iostream>
#include <cstdint>

int32_t main() {
  int sight = 10;

  // ...

  // 마법의 물약을 먹어서 시야 거리가 0
  sight = 0;
  return 0;
}

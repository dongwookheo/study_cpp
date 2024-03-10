/*!
 * Formatting은 사람을 위한 것, 컨벤션과 같이 팀원들과 만든 규칙을 따라야한다.
 * 파이썬에서는 indenting을 통해 scope를 결정하게 되나, c++에서는 여백과 공백은 컴파일러에게 무시된다.
 *   - 출력하기 위한 string 내에서의 공백은 예외.
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  // 가독성을 위한 줄맞춤의 경우, 선호하지 않는 회사도 있음. 버전 관리 과정에서 formatting 할 때, 귀찮음이 발생.
  int32_t a    = 1234;
  int32_t bsdg = 2315235;
  return 0;
}
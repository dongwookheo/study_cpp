/*!
 * Preprocessor: 전처리기, 매크로, 라이브러리 include, 헤더가드 등에 사용
 * 매크로: #define에서 정의한 것을 뒤에 것으로 대치
 *   옛날에는 하드코딩 한 것과 비슷한 성능을 가진다고 생각해 많이 사용했다.
 *   하지만, 요즘에는 컴퓨터 구조가 달라져 사용하지 않는 지양하는 방식이다.
 * 매크로는 해당 파일에서만 유효하다!!
 */
#include <cstdint>
#include <iostream>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))  // 요즘은 매크로로 잘 구현하지 않음
#define APPLE

int32_t main() {
  using namespace std;
  cout << MAX(1 + 10, 2) << endl;

#ifdef APPLE
  cout << "Apple" << endl;
#else
  cout << "Orange" << endl;
#endif

  return 0;
}

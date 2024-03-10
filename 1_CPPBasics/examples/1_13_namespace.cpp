/*!
 * namespace의 필요성: 동일한 이름의 함수, 변수 등을 필요에 의해 사용해야 하는 경우 이들을 구분지어 줄 수 있음
 * using namespace를 통해 namespace::을 생략할 수 있음
 * namespace안에 namespace를 만들어 줄 수 있다
 */
#include <cstdint>
#include <iostream>

namespace MySpace {
  int32_t myFunction(int32_t a, int32_t b) {
    return a + b;
  }
} // namespace MySpace

int32_t myFunction(int32_t a, int32_t b) {
  return a * b;
}

int32_t main() {
  using namespace std;
  cout << myFunction(1, 3) << endl;
  cout << MySpace::myFunction(1, 3) << endl;

  return 0;
}

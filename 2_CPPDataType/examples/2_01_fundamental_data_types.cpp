/*!
 * Fundamental data types: e.g. basic, primitive, ...
 * 데이터 타입마다 메모리의 사이즈가 다름
 *   - char: 1byte, int: 4byte ...
 *
 * signed, unsigned: 부호, 특정 연산에서 unsigned가 빠른 경우가 있음
 *
 * 주의) cout을 이용해서 int의 작은 사이즈로 char을 사용하는 경우, int로 형변환 해야함
 *
 * copy initialization / direct initialization / uniform initialization
 *
 * 최근 추세는 변수를 사용하기 직전에 선언하는 것을 선호
 * - 디버깅하기 쉬움
 * - 변수와 기능이 묶여 있다면 refactoring에 편리
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  int32_t j = 3;
  int32_t i = -1;
  int32_t k = 123;
  int8_t a = 'H';

  cout << (uintptr_t) static_cast<void *>(&a) << endl;
  cout << (uintptr_t) static_cast<void *>(&i) << endl;
  cout << (uintptr_t) static_cast<void *>(&j) << endl;
  cout << (uintptr_t) static_cast<void *>(&k) << endl;
  cout << "-----------------------------------------" << endl;

  bool bValue = false; // 내부적으로 boolean은 숫자로 저장
  char chValue = 'A';
  char chValue2 = 65; // 내부적으로 문자도 결국 숫자로 저장
  cout << chValue << ' ' << chValue2 << endl;

  float fValue = 3.141592f; // float 형은 뒤에 f를 붙여준다
  double dValue = 3.141592;
  cout << fValue << ' ' << dValue << endl;

  auto aValue = 3.141592; // auto는 컴파일 타임에 자동으로 결정
  auto aValue2 = 3.141592f;
  cout << sizeof(aValue) << ' ' << sizeof(aValue2) << endl;
  cout << sizeof(double) << ' ' << sizeof(dValue) << endl;

  int32_t copy = 123; // Copy initialization
  int32_t direct(123); // Direct initialization
  int32_t uniform{123}; // Uniform initialization: 매우 엄격 (double 을 넣는 경우, error)

  // homogeneous 한 데이터들을 선언하고 초기화하는 경우 한 줄로 가능
  int32_t asd=1, vd(123), be{124};

  return 0;
}

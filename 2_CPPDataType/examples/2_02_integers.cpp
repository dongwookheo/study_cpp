/*!
 * Integers: char, short, int, long, long long
 * 한 비트는 부호에 사용 (제일 앞 비트 0: 양수, 1: 음수)
 *
 * 주의)
 * - Overflow의 경우에는 error, warning을 내뿜지 않기 때문에 매우 조심해야한다!
 * - 정수형의 나눗셈을 다루는 부분에서도 사람이 생각하는 것과 다르게 몫이 도출되므로 주의
 */
#include <cstdint>
#include <iostream>
#include <cmath>
#include <limits>

int32_t main() {
  using namespace std;

  unsigned short s = 1;
  int i = 1;
  long l = 1;
  long long ll = 1;

  // short 형의 최대 값
  cout << std::pow(2, sizeof(short) * 8 -1) -1 << endl;
  cout << std::numeric_limits<short>::max() << endl;
  cout << std::numeric_limits<short>::min() << endl;
  cout << std::numeric_limits<short>::lowest() << endl;

  // Overflow 예시
  s = std::numeric_limits<unsigned short>::max();
  s += 1;
  cout << std::numeric_limits<unsigned short>::max() << " + 1 = " << s << endl; // overflow!!

  // Underflow 예시
  s = std::numeric_limits<unsigned short>::min();
  s -= 1;
  cout << std::numeric_limits<unsigned short>::min() << " - 1 = " << s << endl; // underflow!!

  //! 무서운 예시
  unsigned int ui = -1;
  cout << ui << endl; //! 컴파일러가 warning조차 내뿜지 않는다...
  return 0;
}

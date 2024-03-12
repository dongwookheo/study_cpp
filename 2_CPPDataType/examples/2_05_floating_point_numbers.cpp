/*!
 * 소수점이 이동하며 표현
 * float 형을 기준으로 설명. 4bytes == 32bits 를 세 부분으로 나눈다. (sign: 부호, exponent: 지수, mantissa: 가수)
 * sign은 1bit, exponent는 8bit, 나머지는 mantissa
 * sign: 0, exponent: 00000111, mantissa: 1100000000000000000000
 * sign: +, exponent: 2^0 + 2^1 + 2^2, mantissa: 2^(-1) + 2^(-2)
 * 따라서, 위 예시는 다음을 의미 =>  +(1+0.75) X 2^(7-127) = +1.316554 X 10^(-36)
 */
#include <cmath>
#include <cstdint>
#include <iomanip> // 출력 자리수 조정을 위한 헤더
#include <iostream>
#include <limits>

int32_t main() {
  using namespace std;

  // 초기화 방법
  float f(3.141592f);
  double d(3.141952);
  long double ld(3.141592l);

  cout << "float size: " << sizeof(f) << endl;
  cout << "double size: " << sizeof(d) << endl;
  cout << "long double size: " << sizeof(ld) << endl;

  // 부동소수점 표현에서 min은 표현할 수 있는 가장 작은 숫자의 절대값
  cout << numeric_limits<float>::min() << endl;
  cout << numeric_limits<float>::lowest() << endl;

  // scientific notation
  cout << 3.14 << endl;
  cout << 3.14e-3 << endl;
  cout << 3.14e2 << endl;
  cout << "-------------------------------------" << endl;

  cout << 1.0 / 3.0 << endl;
  cout << std::setprecision(16);
  cout << 1.0 / 3.0 << endl;
  cout << "-------------------------------------" << endl;

  // 부동 소수점의 오차가 누적되면 시스템이 불안정해질 수 있다...
  // 마냥 메모리를 늘려 double, long double을 사용할 순 없지 않을까? 메모리에 부담이 많을 듯
  f = 123456789.0f;
  cout << f << endl;
  d = 0.1;
  cout << std::setprecision(17) << d << endl;
  cout << "-------------------------------------" << endl;

  // inf, nan
  cout << 5.0 / 0.0 << " " << std::isinf(5.0 / 0.0) << endl;
  cout << -5.0 / 0.0 << " " << std::isinf(-5.0 / 0.0) << endl;
  cout << 0.0 / 0.0 << " " << std::isnan(0.0 / 0.0) << endl;

  return 0;
}

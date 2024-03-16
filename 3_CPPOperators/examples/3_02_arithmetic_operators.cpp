/*!
 * +, -, *, /, %
 *
 * 주의)
 *   - 음수의 나눗셈 연산은 C++11부터 소숫점 뒤는 버리는 것으로 약속
 *   - 나머지 연산의 경우, C++11부터 나누어지는 수가 음수이면 음수, 양수이면 양수로 약속
 *
 * +=, -=, ...  연산자를 활용하면 코드 읽는 시간도 줄여줄 수 있고, 타이핑 피로도도 줄여준다
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;
  int32_t x = -1; // 단항 연산자는 붙여서 쓸 것

  // 정수형과 부동소수점형에서의 나눗셈 연산의 의미가 다르다
  cout << 5 / 4 << endl;
  cout << float(5) / 4 << endl;
  cout << 5 / float(4) << endl;
  cout << float(5) / float(4) << endl;
  cout << "----------------------------------" << endl;

  // 음수의 나눗셈 연산은 C++11부터 소숫점 뒤는 버리는 것으로 약속
  cout << -5 / 2 << endl;
  cout << -5 / 2. << endl;
  // 나머지 연산의 경우, C++11부터 나누어지는 수가 음수->음수, 양수->양수
  cout << -5 % 2 << endl;
  cout << 5 % -2 << endl;
  cout << -5 % -2 << endl;

  return 0;
}

/*!
 * char: 문자형 데이터 타입. 컴퓨터 내에서 숫자로 표현됨
 * - char type을 표현할 때는 '', string을 표현할 때는 ""
 *
 * cpp style casting
 * - int('A'); - 'A'에 해당하는 int형을 만든다~ 이런 의미가 강함 (+강제적 변환)
 * - static_cast<int>('A'); - 컴파일러에게 안전하게 변환을 할 수 있는지 사전에 체크를 받는 느낌
 *
 * '\n' vs endl
 * - '\n'은 줄바꿈 문자
 * - endl은 버퍼에 있는 모든 문자를 출력하고 줄바꿈
 * - +) std::flush는 줄바꿈을 하지 않고 버퍼에 남은 모든 문자를 출력
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  int8_t c1(65), c2('A');
  cout << c1 << ' ' << c2 << ' ' << (int)c1 << ' ' << (int)c2 << endl;

  // c-style casting
  cout << (int)'A' << ' ' << (char)65 << endl;
  // cpp style casting
  cout << int('A') << ' ' << char(65) << endl;

  cout << static_cast<char>(65) << endl;

  cin >> c1; // 입력 스트림의 경우, 변수의 메모리를 넘어가는 것이 들어오면 버퍼에 저장됨
  cout << c1 << ' ' << static_cast<int>(c1) << endl;

  return 0;
}

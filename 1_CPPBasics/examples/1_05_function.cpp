/*!
 * Function: 반복적인 패턴을 함수로 만들면 편리.
 * Return values: 함수에서 output으로 반환하는 값. 함수의 선언부에서 이름 앞에 명시한 자료형과 동일해야한다
 * Parameters: 함수에 들어가는 입력
 *   참고) 함수의 입력과 출력이 모두 없는 경우가 있음 (void)
 * Arguments: 함수를 사용할 때, 넣어주는 입력 값들
 */
#include <cstdint>
#include <iostream>

int32_t multiplyTwoNumbers(const int32_t& num_a, const int32_t& num_b);
void printHelloWorld();

int32_t main() {
  using namespace std;

  cout << multiplyTwoNumbers(3, 6) << endl;
  cout << multiplyTwoNumbers(3, 123) << endl;
  cout << multiplyTwoNumbers(24, 16) << endl;

  printHelloWorld();

  return 0;
}

int32_t multiplyTwoNumbers(const int32_t& num_a, const int32_t& num_b) {
  return num_a * num_b;
}

void printHelloWorld() {
  std::cout << "Hello World!" << std::endl;
}

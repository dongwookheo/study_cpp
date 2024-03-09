/*!
 * Objects(객체): 메모리를 가지는 문자, 숫자 등의 의미있는 것들
 * Variables(변수): 메모리를 갖는 객체의 이름(handle), 사람이 인식하기 쉽도록
 * L-values / R-values: 메모리를 갖는 값, 메모리에 접근 가능한 값 O / X(임시적으로 저장)
 * Debug / Release: Debug 모드는 디버깅할 때 필요한 도구를 포함, 무겁고 느리다.
 * 프로그램을 배포하고자 하는 경우, Release 모드로 배포를 해야한다.
 * Initailization(초기화) vs Assignment(대입): 변수를 선언하자마자 값을 할당해는 주는 것이 초기화
 * 초기화를 안했을 때의 문제: 변수 내에 예상치 못한 쓰레기 값이 들어가 있다. 프로그램의 오류를 발생시킬 수 있다.
 * 항상 변수를 초기화하는 버릇을 들이자!
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  int32_t x = 10;  // integer variable x을 10으로 초기화(Initialization)
  x = 123;  // '=': Assignment operator
  int32_t y(132);  // 다른 초기화 방법!
  int32_t z{123};  // 다른 초기화 방법

  std::cout << x << y << z << std::endl;
  std::cout << &x << std::endl;  // '&': Ampersand, 주소 접근

  return 0;
}
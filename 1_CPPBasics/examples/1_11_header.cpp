/*!
 * 헤더를 분리하면 좋은점
 * - 재사용성이 증가
 * - 전방 선언문을 매번 작성해주는 부분 완화
 *
 * 헤더 가드
 * #pragma once: 때때로 컴파일 속도를 향상, but 표준이 아니기 때문에 로봇, 자동차 등의 임베이드 시스템을 개발하는 환경에서는 자제.
 * #ifndef HEADER_H : 일반적인 사용방법, 모든 컴파일러에서 동작하는 방식
 * #define HEADER_H
 * #endif
 * 표준 라이브러리에 경우 <>, 유저가 만든 경우 ""로 표현하는 것이 일반적
 * 헤더와 소스 파일은 분리하는 것이 좋다
 */
#include <cstdint>
#include <iostream>
#include "add.h"

int32_t main() {
  using namespace std;
  cout << add(1, 3) << endl;
  return 0;
}

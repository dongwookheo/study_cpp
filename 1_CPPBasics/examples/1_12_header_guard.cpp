/*!
 * Header guards: 중복된 헤더를 include 하는 것을 방지
 * #pragma once: 때때로 컴파일 속도를 향상. 표준이 아니기에 컴파일러 마다 인식하지 못하는 경우가 있다.
 * 따라서, 임베디드 시스템 등에서는 아래와 같이 모든 컴파일러에서 동작할 수 있는 범용적인 표현을 사용하는 것이 좋다
 * #ifndef HEADER_H
 * #define HEADER_H
 * #endif
 *
 * 두 가지 표현을 같이 사용하여, 양측의 장점을 모두 가져오려는 방식으로 작성하는 경우도 있음 
 */
#include <cstdint>
#include <iostream>

int32_t main(){

  return 0;
}

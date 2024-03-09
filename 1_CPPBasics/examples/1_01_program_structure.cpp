/*!
 * Expression(표현식): 문장의 구성 요소가 되는 표현 (e.g. 1 + 1)
 * Statements(명령문): 기능을 수행하는 문장, ";" 으로 끝나야 한다
 * Functions(함수): 입력을 통해 기능을 수행하고 출력이 도출
 * Library(라이브러리): 필요한 기능들을 가져다 쓸 수 있는 집합체
 * Standard Library(표준 라이브러리)
 * 문법 오류: ';'을 빼먹는 등 프로그래밍 문법 규칙을 지키지 않아 발생하는 오류
 */
#include <iostream>  // Preprocessor directive
#include <cstdint>

int32_t main() {
  int32_t x = 2;
  x = 5;  // 2, 5: Literal
  int32_t y = x + 3;

  std::cout << y << std::endl;  // std:: : namespace, 이름이 겹치는 것들을 분리

  return 0;
}

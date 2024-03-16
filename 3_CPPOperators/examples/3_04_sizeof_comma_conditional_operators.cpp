/*!
 * sizeof operator
 * - 데이터의 크기를 알고 싶을 때 사용
 * - 사용자가 만든 structure에도 사용할 수 있다
 *
 *
 * Comma operator
 * - 연산자 우선순위가 assignment operator('=')보다 낮으므로 유의!
 *
 * Conditional operator
 * - 유일한 삼항 연산자
 * - const 변수를 초기화하는 경우 사용할 수 있을 것
 * - 복잡한 경우에는 그냥 if문을 사용하는 것이 가독성에 도움이 된다
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  int32_t a;

  cout << sizeof(float) << endl;
  cout << sizeof a << endl;

  // Comma operator
  int32_t x = 3;
  int32_t y = 10;
  int32_t z = (++x, ++y); // ++y가 z로 초기화 됨
  cout << x << ' ' << y << ' ' << z << endl;

  // Conditional operator
  bool onSale = false;
  int32_t price;

  // price를 const로 사용하고 싶은 경우 이런식으로 작성할 수 없음
  if (onSale)
    price = 10;
  else
    price = 100;

  const int32_t cPrice = (onSale == true) ? 10 : 100;

  return 0;
}

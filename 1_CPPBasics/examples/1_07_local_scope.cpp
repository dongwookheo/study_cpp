/*!
 * Local scope: '{}' 로 구분되는 scope
 * 지역 변수는 영역을 벗어나면 사용할 수 없음. 지역 변수가 차지하고 있던 메모리는 지역 변수가 영역을 벗어날 때, stack 메모리로 반납.
 * 반납된 메모리는 다음 지역 변수가 사용할 수 있도록 대기.
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;
  int32_t x(0);  // main {} 안에서만 유효함
  cout << x << " " << &x << endl;
  {
    int32_t x(1);
    cout << x << " " << &x << endl;
  }

  {
    int32_t x(2);
    x = 3;
    cout << x << " " << &x << endl;
  }

  cout << x << " " << &x << endl;

  return 0;
}
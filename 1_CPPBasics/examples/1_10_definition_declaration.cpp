/*!
 * Definition과 Declaration을 분리하는 방법.
 * - 왜 분리? main이 되는 함수를 찾기 쉽도록...
 */
#include <cstdint>
#include <iostream>

// Declaration, forward declaration
int32_t add(int a, int b);
int32_t subtract(int a, int b);

int32_t main() {
  using namespace std;
  cout << add(1, 2) << endl;
  cout << subtract(5, 2) << endl;

  return 0;
}

// Definition
int32_t add(int a, int b) {
  return a + b;
}

int32_t subtract(int a, int b) {
  if (a > b)
    return a - b;
  else
    return b - a;
}
/*!
 * Logical operators
 * - Logical Not: !, Logical And: &&, Logical Or: ||
 * - if 문의 조건식에 사용하면, 코드를 간단히 하는데 이점이 있음
 *   - e.g. if (a > 0 && a < 10) { ... }
 *   - if (a > 0) { ... } if (a < 10) { ... } 보다 간단함
 *
 * - short-circuit evaluation
 *   - 논리 연산자의 피연산자가 두 개일 때, 첫 번째 피연산자만으로 결과가 결정되면 두 번째 피연산자는 평가하지 않음
 *   - e.g. if (a > 0 && b++ > 0) { ... }
 *   - a가 0보다 크지 않으면 b++을 평가하지 않음. 즉, b++은 실행되지 않음.
 *
 * - DeMorgan's Law
 *   - !(A && B) == !A || !B
 *   - !(A || B) == !A && !B
 *
 * - XOR (exclusive OR)
 *   - 두 피연산자가 서로 다른 경우에만 참
 *   - e.g. (true ^ true) == false, (true ^ false) == true,
 *          (false ^ true) == true, (false ^ false) == false
 *
 * - && 와 || 의 연산자 우선순위
 *   - && 가 || 보다 우선순위가 높음
 *   - e.g. a && b || c && d == (a && b) || (c && d)
 */
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  bool b1 = true;
  bool b2 = false;

  cout << boolalpha;

  // Logical Not
  cout << "Logical Not: " << !b1 << endl;
  // Logical And
  cout << "Logical And: " << (b1 && b2) << endl;
  // Logical Or
  cout << "Logical Or: " << (b1 || b2) << endl;

  // Short-circuit evaluation
  int a = 0;
  int b = 0;
  if (a > 0 && b++ > 0) {
    // a가 0보다 크지 않으면 b++을 평가하지 않음. 즉, b++은 실행되지 않음.
  }
  cout << "b: " << b << endl;

  if (a >= 0 || b++ > 0) {
    // a가 0보다 크거나 같으면 b++을 평가하지 않음. 즉, b++은 실행되지 않음.
  }
  cout << "b: " << b << endl;

  // DeMorgan's Law
  // !(A && B) == !A || !B
  // !(A || B) == !A && !B
  b1 = true;
  b2 = false;
  cout << "DeMorgan's Law: " << !(b1 && b2) << " == " << (!b1 || !b2) << endl;
  cout << "DeMorgan's Law: " << !(b1 || b2) << " == " << (!b1 && !b2) << endl;

  // XOR (exclusive OR)
  cout << "XOR: " << (true ^ true) << " == " << false << endl;
  cout << "XOR: " << (true ^ false) << " == " << true << endl;
  cout << "XOR: " << (false ^ true) << " == " << true << endl;
  cout << "XOR: " << (false ^ false) << " == " << false << endl;

  // && 와 || 의 연산자 우선순위
  b1 = true;
  b2 = false;
  bool b3 = true;
  bool b4 = false;
  cout << "Operator precedence: " << (b1 && b2 || b3 && b4) << " == " << ((b1 && b2) || (b3 && b4)) << endl;

  return 0;
}


/*!
 * Bitwise operators
 * - 과거에는 1bit만을 필요로하는 boolean type에 대한 메모리를 아끼기 위해,
 * - 최소 단위인 1byte(8bit)를 사용하여 8개의 boolean 값을 저장하고, bit단위 연산을 수행했다
 * - bit단위 연산은 빠르게 수행되기 때문에, 성능 향상을 위해 사용!!!
 *
 * - Bitwise operators
 *   - bit 연산을 수행할 때, 보수로 인해 복잡해지므로 unsigned type의 사용이 일반적
 *   - &, |, ^ : bitmask에 많이 사용된다
 */
#include <bitset>
#include <cstdint>
#include <iostream>
int32_t main() {
  using namespace std;

  // << : left shift
  // >> : right shift
  // ~ : bitwise NOT
  // & : bitwise AND
  // | : bitwise OR
  // ^ : bitwise XOR

  // Left shift
  uint32_t a = 3;
  cout << std::bitset<8>(a) << ", " << a << endl; // 0011, 3

  cout << std::bitset<8>(a << 1) << ", " << (a << 1) << endl; // 0110, 6
  cout << std::bitset<8>(a << 2) << ", " << (a << 2) << endl; // 12
  cout << std::bitset<8>(a << 3) << ", " << (a << 3) << endl; // 24
  cout << std::bitset<8>(a << 4) << ", " << (a << 4) << endl; // 48

  // Right shift
  uint32_t b = 1024;
  cout << std::bitset<16>(b) << ", " << b << endl; // 1024

  cout << std::bitset<16>(b >> 1) << ", " << (b >> 1) << endl; // 512
  cout << std::bitset<16>(b >> 2) << ", " << (b >> 2) << endl; // 256
  cout << std::bitset<16>(b >> 3) << ", " << (b >> 3) << endl; // 128
  cout << std::bitset<16>(b >> 4) << ", " << (b >> 4) << endl; // 64

  // Bitwise NOT
  uint32_t c = 1024;
  cout << std::bitset<16>(c) << ", " << c << endl; // 1024

  cout << std::bitset<16>(~c) << ", " << (~c) << endl;

  // Binary representation (C++11)
  uint32_t d = 0b1100;
  uint32_t e = 0b1010;
  cout << std::bitset<4>(d) << ", " << d << endl; // 1100, 12
  cout << std::bitset<4>(e) << ", " << e << endl; // 1010, 10

  // Bitwise AND, OR, XOR
  cout << std::bitset<4>(d & e) << endl; // 1000, 8
  cout << std::bitset<4>(d | e) << endl; // 1110, 14
  cout << std::bitset<4>(d ^ e) << endl; // 0110, 6

  
  return 0;
}

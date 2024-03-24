/*!
 * Bit flags and masks
 * - 어떤 함수의 인자로 여러 개의 옵션을 전달할 때, 비트 플래그를 사용하여 효율적으로 처리할 수 있다.
 * - 비트 플래그를 사용하면, 여러 개의 옵션을 하나의 변수에 저장할 수 있다.
 * - e.g. glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 * - e.g. glClear(GL_COLOR_BUFFER_BIT); // 하나만 인자로 넘기고 싶은 경우에도 사용할 수 있다.
 */
#include <bitset>
#include <cstdint>
#include <iostream>

int32_t main() {
  using namespace std;

  /*
   * bool item1_flag = false;
   * bool item2_flag = false;
   * bool item3_flag = false;
   * bool item4_flag = false;
   * ...
   * 매우 비효율적인 방법... (array?, structure? class? 등으로 해결하는 게 최선일까?)
   * 실제로는 연산의 효율성을 위해 비트 플래그를 사용한다!!!!
   */

  // Options
  constexpr uint8_t opt0 = 1 << 0; // 0000 0001
  constexpr uint8_t opt1 = 1 << 1; // 0000 0010
  constexpr uint8_t opt2 = 1 << 2; // 0000 0100
  constexpr uint8_t opt3 = 1 << 3; // 0000 1000

  // Item이 8개라 가정, usigned char로 표현
  uint8_t item_flag = 0; // 0000 0000
  cout << "No item :\t" << bitset<8>(item_flag) << endl;

  // item0 on
  item_flag |= opt0; // 0000 0001
  cout << "Item0 obtained:\t" << bitset<8>(item_flag) << endl;

  // item3 on
  item_flag |= opt3; // 0000 1001
  cout << "Item3 obtained:\t" << bitset<8>(item_flag) << endl;

  // item0 lost
  item_flag &= ~opt0; // 0000 1000
  cout << "Item0 lost:\t" << bitset<8>(item_flag) << endl;

  // check item1
  if (item_flag & opt1) {
    cout << "Item1 obtained" << endl;
  } else {
    cout << "Item1 not obtained" << endl;
  }

  // check item3
  if (item_flag & opt3) {
    cout << "Item3 obtained" << endl;
  } else {
    cout << "Item3 not obtained" << endl;
  }

  // item1, item2 on
  item_flag |= (opt2 | opt1); // 0000 1110
  cout << "Item1, Item2 obtained:\t" << bitset<8>(item_flag) << endl;

  // change between item1 and item0
  if ((item_flag & opt1) && !(item_flag & opt0)) {
    item_flag ^= (opt1 | opt0);
  }
  cout << "Item1, Item2 changed:\t" << bitset<8>(item_flag) << endl;

  // Bit mask example
  {
    constexpr uint32_t red_mask = 0xFF0000; // 1111 1111 0000 0000 0000 0000
    constexpr uint32_t green_mask = 0x00FF00; // 0000 0000 1111 1111 0000 0000
    constexpr uint32_t blue_mask = 0x0000FF; // 0000 0000 0000 0000 1111 1111

    uint32_t pixel_color = 0xDAA520;
    cout << std::bitset<32>(pixel_color) << endl;

    uint8_t red = (pixel_color & red_mask) >> 16;
    uint8_t green = (pixel_color & green_mask) >> 8;
    uint8_t blue = pixel_color & blue_mask;

    cout << "Red: " << std::bitset<8>(red) << ", " << static_cast<uint32_t>(red) << endl;
    cout << "Green: " << std::bitset<8>(green) << ", " << static_cast<uint32_t>(green) << endl;
    cout << "Blue: " << std::bitset<8>(blue) << ", " << static_cast<uint32_t>(blue) << endl;
  }


  return 0;
}

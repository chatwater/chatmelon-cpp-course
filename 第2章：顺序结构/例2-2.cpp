#include <iostream>
using namespace std;
// 英文字母
int main() {
  int ans1;
  char ans2;
  ans1 = 'M' - 'A' + 1;  // 'A'是65，'M'是77，所以ans1是 77 - 65 + 1 = 13
  ans2 = 'A' + 18 - 1;
  cout << ans1 << endl;  // 输出的ans1是整数，因为它的类型是int
  cout << ans2 << endl;  // 输出的ans2是字符，因为它的类型是char
  return 0;
}

/**
 * char 字符型 P17那些字符
 * char可以存一个字符，也可以存一个整数（-128到127之间的整数）
 *
 */
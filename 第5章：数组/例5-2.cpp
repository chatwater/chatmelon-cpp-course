#include <iostream>
using namespace std;
// 小鱼的数字游戏：帮小鱼记住一组数字，0表示结束，再反着念出来
// 一维数组的应用
int main() {
  int n = 0, tmp, a[110];
  do {
    cin >> tmp;
    a[n] = tmp;  // 输入数字
    n++;
  } while (tmp != 0);  // 0是结束标志，不能算在内

  // 正向输出:包含0
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  // 反向输出
  n--;  // 去掉结束标志0。
  // 反向输出0以外的其它数
  // n-- 的意思是先使用n的值，再减1
  while (n--) {
    cout << a[n] << " ";
  }
  cout << endl;
  return 0;
}
/*
为什么要 n-- ? 因为：当输入为0时，n会多加1。
while 在每次循环之前检查条件。
do...while 在每次循环之后检查条件。

输入：（注意 0是结束标识）
56 78 90 6 79 0

输出
56 78 90 6 79 0
79 6 90 78 56

*/
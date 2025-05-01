#include <iostream>
using namespace std;
// 小鱼比可爱度
// 一维数组的应用
int main() {
  int a[110], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];  // 输入每条鱼的可爱值
  }
  for (int i = 0; i < n; i++) {
    int cnt = 0;  // 比当前鱼可爱度低的鱼的数量，初始值0
    for (int j = i - 1; j >= 0; j--) {
      if (a[j] < a[i]) {
        cnt++;
      }
    }
    cout << cnt << " ";  // 输出比当前鱼可爱度低的鱼的数量
  }
  return 0;
}

/*
输入:
6
56 34 2 4 7 89

输出:
0 0 0 1 2 5
*/
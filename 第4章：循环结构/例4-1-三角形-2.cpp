#include <iostream>
using namespace std;
// 输出倒三角
int main() {
  for (int i = 1; i <= 10; i++) {
    for (int j = 10; j >= i; j--) {
      cout << '*';
    }
    cout << endl;
  }
  return 0;
}

/**
输出：

**********
*********
********
*******
******
*****
****
***
**
*


 */
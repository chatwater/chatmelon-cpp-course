
#include <cstdlib>  //  rand() 和srand()函数在这个包里面
#include <ctime>    //  time() 函数在这个包里面
#include <iostream>
using namespace std;
int main() {
  int ans;
  srand(time(0));  // 生成随机数种子，用的当前时间的时间戳做的随机数种子
  //  cout << rand() << endl; //执行了srand(time(0))后，再执行rand()生成的随机数是真随机数
  ans = rand() % 100 + 1;  // 生成1~100之间的随机数
  int input;
  do {
    cin >> input;
    if (input < ans) {
      cout << "猜小了" << endl;
    }
    if (input > ans) {
      cout << "猜大了" << endl;
    }
  } while (ans != input);
  cout << "猜对了!" << endl;
  return 0;
}
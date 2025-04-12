#include <iostream>
using namespace std;
// 一尺之棰
// while语句的应用
int main() {
    int a, days = 1;
    cin >> a;
    while (a > 1) {
        days++;
        a = a / 2;
    }
    cout << days << endl;
    return 0;
}

/*
  while(循环条件){
     循环体
  }
  注：循环体至少执行一次
*/
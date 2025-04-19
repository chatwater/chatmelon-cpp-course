#include <iostream>
#include <cstdlib> //  rand() 函数在这个包里面
#include <ctime>   //  time() 函数在这个包里面
using namespace std;
// 猜数游戏
// do while语句的应用

//生成真正的随机数
int main() {
    int ans, guess;

    // 输出是类似 1745067022 的值，它叫时间戳。指的是从协调世界时（UTC）
    // 1970年1月1日0时0分0秒起到某个时间的秒数‌
    // cout << time(0)<< endl; 

    srand(time(0)); // 生成随机数种子，用的当前时间的时间戳做的随机数种子
    // cout << rand() << endl; //执行了srand(time(0))后，再执行rand()生成的随机数是真随机数
    ans = rand() % 100 + 1; // 生成1~100之间的随机数
    do {
        cin >> guess;
        if( guess < ans){
            cout << "猜小了" << endl;
        }
        if( guess > ans){
            cout << "猜大了" << endl;
        }
    }while(guess != ans);
    cout << "你猜对了" << endl;
    return 0;
}

/*
  do{
    循环体
  }while(循环条件)
  注：循环体至少执行1次 循环条件至少执行一次

  while执行逻辑：
  先执行循环体代码--->再判断循环条件--满足-->
  再执行循环体代码--->再判断循环条件--满足-->
  再执行循环体代码--->再判断循环条件--满足-->
  再执行循环体代码--->再判断循环条件--满足-->
  .
  .
  .
  再执行循环体代码--->再判断循环条件--满足-->
  再执行循环体代码--->再判断循环条件--不满足-->
  循环结束



*/
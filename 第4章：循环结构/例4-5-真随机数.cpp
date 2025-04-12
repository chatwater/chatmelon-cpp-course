#include <iostream>
#include <cstdlib> //  rand() 函数在这个包里面
#include <ctime>   //  time() 函数在这个包里面
using namespace std;
// 猜数游戏
// do while语句的应用

//生成真正的随机数
int main() {
    int ans, guess;
    srand(time(0)); // 生成随机数种子
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
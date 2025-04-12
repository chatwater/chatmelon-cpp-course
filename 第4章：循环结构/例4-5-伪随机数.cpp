#include <iostream>
#include <cstdlib> //  rand() 函数在这个包里面
using namespace std;
// 猜数游戏
// do while语句的应用

//伪随机数
int main() {
    //代码没有调用srand()初始化随机种子，因此默认使用种子值1，每次运行程序生成的随机数序列都相同
    cout << rand()<< endl;
    return 0;
}

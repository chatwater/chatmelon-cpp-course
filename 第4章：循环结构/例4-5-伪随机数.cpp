#include <iostream>
#include <cstdlib> //  rand() 函数在这个包里面
using namespace std;
// 猜数游戏
// do while语句的应用

//伪随机数
int main() {
    //代码没有调用srand()初始化随机种子，因此默认使用种子值1，每次运行程序生成的随机数序列都相同
    cout << rand()<< endl;
    cout << "RAND_MAX = " << RAND_MAX << endl;
    return 0;
}

/**
 * rand()函数返回一个0到RAND_MAX之间的随机整数，
 * 其中RAND_MAX是一个常量，它的值因系统而异，但至少为32767（2^15 - 1）
 */
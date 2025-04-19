#include <iostream>
#include <cmath> //数学库，包含pow函数
using namespace std;
// 玩橡皮泥
// 
/**
 * 定义宏常量 PI (变量的值是可以变的，常量的值是不能变的)
 * 1、宏没有类型：PI 只是一个文本替换，它本身没有数据类型
 * 2、宏的值是固定的
 * 3、宏的作用范围是全局的，本文件内都可以使用
 * 
 * 推荐使用const定义常量,不推荐使用宏
 * const double PI = 3.14159265358979323846;
 */
#define PI 3.14159265358979323846

int main() {
    int r1 = 4, r2 = 10;
    double V, l;
    V = 4.0 / 3 * PI * (pow(r1, 3) + pow(r2, 3)); //计算体积
    l = pow(V, 1.0 / 3); //计算边长
    // cout << (int)l << endl; //输出边长。(int)l 是强制类型转换，将double类型转换为int类型
    cout << int(l) << endl; //输出边长。int(l) 是强制类型转换，将double类型转换为int类型
    return 0;
}

/**
 * 研究型学习：完全陌生的科目，直接学习，刷题或刷知识点，刷题的过程中学习。刷很多遍
 * 
 */
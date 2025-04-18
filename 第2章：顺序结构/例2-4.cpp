#include <iostream>
#include <cmath>
using namespace std;
// 销售预测
int main() {
    double a = 1, b = -100, c = 2400;
    double delta, ans;
    delta = pow(b, 2) - 4 * a * c;
    ans = (-b + sqrt(delta)) / (2 * a); //函数sqrt()用于求平方根 sqrt(delta)相当于pow(delta, 0.5)
    cout << 110 - int(ans + 0.5) << endl; 
    return 0;
}

/**
 * 知识点1: 一元二次方程求解公式
 * ax^2 + bx + c = 0
 * x^2 - 100x + 2400 = 0
 * 所以 a = 1, b = -100, c = 2400
 * delta = b^2 - 4ac
 * x = (-b ± sqrt(b^2 - 4ac)) / 2a
 * 
 * 知识点2:int()函数强制数据转换为整数是向下取整，即只要整数部分，不要小数
 * 例如：int(46.1) = 46 、int(45.8) = 45
 * 所以 int(ans + 0.5) 是一种简单的四舍五入方法
 */
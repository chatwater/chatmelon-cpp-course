#include <cstdio>
#include <cmath>
using namespace std;
// 【题目】距离函数：输入2维平面上3个点的坐标，计算周长
// 方法2:定义子程序

// 函数：平方函数
double sq(double x) {
    return x * x;
}

// 函数：计算两点间距离函数
double dist(double x1, double y1, double x2, double y2) {
    return sqrt(sq(x1 - x2) + sq(y1 - y2));
}

int main() {
    double x1, y1, x2, y2, x3, y3, ans;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    ans = dist(x1, y1, x2, y2);
    ans += dist(x2, y2, x3, y3);
    ans += dist(x3, y3, x1, y1);
    printf("%.2f\n", ans);
    return 0;
}
/**
 * 输入：3个点坐标
 * -1.1 -3.5 4.25 -3.52 2.58 4.56
 * 
 * 输出：围成的三角形周长
 * 22.46
*/

/**
 * 函数定义的一般形式：
 * 
 * 返回类型 函数名(参数类型1 参数名1, 参数类型2 参数名2, ..., 参数类型n 参数名n) {
 *      函数体
 *     return 返回值; // 如果有返回值
 * }
 * 
 * 
 */
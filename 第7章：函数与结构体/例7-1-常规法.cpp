#include <cstdio>
#include <cmath>
using namespace std;
// 距离函数：计算2维平面上3个点的周长
// 方法1:常规计算法
int main() {
    double x1, y1, x2, y2, x3, y3, ans;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    ans = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    ans += sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    ans += sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    printf("%.2f\n", ans);
    return 0;
}
/**
 * 输入：3个点坐标
 * 2.4 4.3 4.5 -3.4 4 -8 9
 * 输出：围成的三角形周长
 * 26.17
*/
#include <cstdio>
// using namespace std;
//小鱼的游泳时间
int main() {
    int a, b, c, d, e, f, delta;
    //注意：scanf和printf在cstdio中定义，是C语言的标准输入输出函数，相当于C++的cin和cout
    scanf("%d%d%d%d", &a, &b, &c, &d);
    delta = (c * 60 + d) - (a * 60 + b);
    e = delta / 60;
    f = delta % 60; //模运算
    printf("%d %d\n", e, f);
    return 0;
}
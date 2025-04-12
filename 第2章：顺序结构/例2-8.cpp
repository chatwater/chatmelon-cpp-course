#include <cstdio>
// using namespace std;
// 再分肥皂水
int main() {
    double t;
    int n;
    //注意：scanf和printf在cstdio中定义，是C语言的标准输入输出函数，不是C++的cin和cout
    //%lf 用于读取“一个double类型的浮点数”,在P24中有说明
    //%d 用于读取“一个int类型的整数（十进制）”
    scanf("%lf%d", &t, &n); //& 读作 and符号
    //%f用于输出"double类型的浮点数（十进制）”
    //%f还可以读入或输出“float类型的浮点数（十进制）”
    //%f 默认输出6位小数，可以指定几位小数，如%.3f表示输出3位小数
    //%d 用于输出"int类型的整数（十进制）”
    printf("%.3f\n%d\n", t/n, n*2);// \n 是换行符
    return 0;
}
#include <cstdio>
// using namespace std;
//变量交换，经典的三段交换法
int main() {
    int a, b, t;
    //注意：scanf和printf在cstdio中定义，是C语言的标准输入输出函数，相当于C++的cin和cout
    scanf("%d %d", &a, &b);

    //经典的三段交换法，交换a和b，其中t是临时变量，为交换服务的。需要背
    //假设a=34,b=78
    t = a; //t=34,a=34,b=78 
    a = b; //t=34,a=78,b=78
    b = t; //t=34,a=78,b=34

    //%d 用于输出"int类型的整数（十进制）”
    printf("%d %d\n", a, b);
    return 0;
}
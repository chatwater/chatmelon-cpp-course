#include <cstdio>
#include <string>
//扩展阅读。认识printf：printf 是一个格式化输出函数。scanf的性质同printf
int main() {
    int a = 10;
    char c = 'A';
    float b = 3.14;
    double d = 2.71828;
    bool flag = true;
    std::string s = "Hello, World!";
    // 直接调用 printf 函数
    printf("整数：%d\n", a); // %d 用于输出整数
    printf("字符：%c\n", c); // %c 用于输出字符
    printf("浮点数：%.2f\n", b); // %.2f 用于输出浮点数，保留两位小数
    printf("双精度浮点数：%.5lf\n", d); // %.5lf 用于输出双精度浮点数，保留五位小数
    printf("布尔值：%s\n", flag ? "true" : "false"); // %s 用于输出字符串，使用三目运算符判断布尔值
    printf("字符串：%s\n", "Hello, World!"); // %s 用于输出字符串


    // 定义一个函数指针，指向 printf 函数，可以这么定义亦说明printf是一个函数
    int (*printf_ptr)(const char*, ...) = printf;

    // 使用函数指针调用 printf 函数
    printf_ptr("使用函数指针\n");

    return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;
// 凯撒密码
// 字符数组
int main() {
    int n; // 偏移量
    char s[60]; // 字符串
    scanf("%d %s", &n, s); // 输入偏移量和字符串
    for (int i = 0; s[i]; i++) {
        putchar((s[i] - 'a' + n) % 26 + 'a'); //计算偏移量并还原
    }
    putchar('\n');
    return 0;
}
/*
为什么同样是扫描读值，n前面有一个&，而s前面没有&？
答：在 C 语言中，& 符号用于获取变量的地址。

1. scanf("%d", &n);
%d 是用于读取整数的格式说明符。
scanf 需要将读取到的值存储到变量中，而变量 n 是整数类型（如 int）。
在 C 语言中，函数参数是按值传递的，scanf 无法直接修改变量的值，因此需要传递变量的地址（使用 & 符号）。
&n 表示变量 n 的地址，scanf 会通过地址将输入的值存储到对应的变量中。

2. scanf("%s", s);
%s 是用于读取字符串的格式说明符。
字符数组 s 本身就是一个指针，指向数组的首地址。
因此，scanf 不需要再取地址，直接传递数组名 a 即可。
例如，如果 s 是 char s[60];，s 本身就等价于 &s[0]，即数组的首地址。

输入1:
3
abcdef

输出1:(每个字符向后移动3位)
defghi

输入2:
5
hellowrold

输出2:(每个字符向后移动5位)
mjqqtbwtqi


*/
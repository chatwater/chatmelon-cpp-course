#include <iostream>
#include <cstdio>
using namespace std;
// 自动修正
// 字符串的输入输出
// 方法1: 直接读入字符串，循环每个字符，处理后输出字符串
int main() {
    char s[110]; // 字符串
    scanf("%s", s); // 输入字符串
    for (int i = 0; s[i] != '\0'; i++) { // '\0'表示字符串结束
       if ( 'a' <= s[i] && s[i] <= 'z') { // 如果是小写字母
            s[i] -= 'a' - 'A'; // 转换为大写字母
        }
    }
    printf("%s\n", s); // 输出字符串
    return 0;
}

/*
输入：
HelloWorld123

输出：
HELLOWORLD123

*/
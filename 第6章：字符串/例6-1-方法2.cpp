#include <iostream>
#include <cstdio>
using namespace std;
// 自动修正
// 字符串的输入输出
//方法2：每次读一个字符，判断是否需要处理，如果需要处理，则处理，否则直接输出
int main() {
    char s; // 字符
    while (1) {
        s = getchar(); // 读入一个字符
        if (s == EOF) { // EOF表示文件结束
            break;
        }
        if ('a' <= s && s <= 'z') { // 如果是小写字母
            s += 'A' - 'a'; // 转换为大写字母
        }
        putchar(s); // 输出字符
    }
    return 0;
}

/*
输入：
HelloWorld123

输出：
HELLOWORLD123

*/
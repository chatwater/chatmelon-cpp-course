#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
// 笨小猴
// 字符数组
int main() {
    char a[110]; // 字符串
    int ans[26] = {0}; // 统计字母a-z出现次数
    int l, mmax, mmin, delta; // 字符串长度，最大值，最小值，差值
    scanf("%s", a); // 输入字符串
    l = strlen(a); // 字符串长度
    for (int i = 0; i < l; i++) { // 遍历字符串
        ans[a[i] - 'a']++; // 统计字母出现次数
    }
    mmax = 0; // 最大值
    mmin = 10000; // 最小值
    for (int i = 0; i < 26; i++) { // 遍历统计数组
        if (ans[i] > mmax) mmax = ans[i]; // 更新最大值
        if (ans[i] != 0 && ans[i] < mmin) mmin = ans[i]; // 更新最小值
    }
    delta = mmax - mmin; // 差值
    if (delta ==0 || delta == 1) { // 质数判断
        printf("No Answer\n0\n");
        return 0;
    }
    for (int h = 2; h * h <= delta; h++) { // 判断是否为质数
        if (delta % h == 0) { // 如果能被整除
            printf("No Answer\n0\n");
            return 0;
        }
    }
    printf("Lucky Word\n%d\n", delta); // 输出结果
    return 0;
}

/*
输入1：
dafHOHdjdj

输出1：
Lucky Word
2

输入2：
duagpqpwtjgjs

输出2：
No Answer
0
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
// 口算练习题
// 字符数组
int main() {
    int n, a, b, c;
    char last, s[20], ans[20];
    scanf("%d\n", &n);
    while (n--) {
        fgets(s, sizeof(s), stdin); // 读入一行字符串
        if(s[0] == 'a' || s[0] == 'b' || s[0] == 'c') {
            last = s[0]; //获取计算符号，并替换为空格
            s[0] = ' '; 
        }
        sscanf(s, "%d %d", &a, &b); // 读入两个整数
        
        switch (last) {
            //书上原代码。编译时报警告。因为sprintf函数已被弃用，推荐使用snprintf函数
            // case 'a': c = a + b;  sprintf(ans, "%d + %d = %d", a, b, c); break; // 加法
            // case 'b': c = a - b;  sprintf(ans, "%d - %d = %d", a, b, c); break; // 减法
            // case 'c': c = a * b;  sprintf(ans, "%d * %d = %d", a, b, c); break; // 乘法
            
            //优化后的代码。将 sprintf 替换为 snprintf，并指定缓冲区的大小，以确保不会发生缓冲区溢出。
            case 'a': c = a + b; snprintf(ans, sizeof(ans), "%d + %d = %d", a, b, c); break; // 加法
            case 'b': c = a - b; snprintf(ans, sizeof(ans), "%d - %d = %d", a, b, c); break; // 减法
            case 'c': c = a * b; snprintf(ans, sizeof(ans), "%d * %d = %d", a, b, c); break; // 乘法
        }
        //书上原代码。编译时报警告：因为 strlen 返回的是 size_t 类型（通常是无符号整数），而 %d 格式说明符期望的是 int 类型（有符号整数）。两者类型不匹配，因此会触发警告。
        // printf("%s\n%d\n", ans, strlen(ans)); // 输出结果

        //优化后的代码。将 strlen(ans) 的返回值强制转换为 int 类型，以匹配 %d 格式说明符。
        printf("%s\n%d\n", ans, (int)strlen(ans)); // 输出结果
    }
    return 0;
}

/*
注：可能编译报警告，可忽略。不过我已经优化了代码，避免了编译警告。

输入：
4        //表示接下来将输入4个算式
a 4 6    //计算4+6，a表示加法
b 5 11   //计算5-11，b表示减法
22 4     //计算22-4，未指定运算符，默认减法(默认同上的b)
c 22 4   //计算22*4，c表示乘法

输出：
4
a 4 6
4 + 6 = 10
10
b 5 11
5 - 11 = -6
11
22 4
22 - 4 = 18
11
c 22 4
22 * 4 = 88
11

*/
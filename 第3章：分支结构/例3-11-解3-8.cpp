#include <cstdio>
using namespace std;
// 三个数排序 解法1
// 用三元表达式（问号表达式）给3个数排序
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    //方法1:用三元表达式（问号表达式）给3个数排序
    int min = (a < b ? (a < c ? a : c) : (b < c ? b : c)); // 最小值
    int max = (a > b ? (a > c ? a : c) : (b > c ? b : c)); // 最大值
    int mid = a + b + c - min - max; // 中间值
    printf("%d %d %d\n", min, mid, max);

    // 方法2:用变量交换给3个数排序
    // if (a > b) {
    //     int t = a;
    //     a = b;
    //     b = t; 
    // }
    // if (a > c) {
    //     int t = a;
    //     a = c;
    //     c = t;
    // }
    // if (b > c) {
    //     int t = b;
    //     b = c;
    //     c = t;
    // }
    // printf("%d %d %d\n", a, b, c);
    return 0;
}
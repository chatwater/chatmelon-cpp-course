#include <cstdio>
// 成绩
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    //解法1
    // printf("%d", int(a * 0.2 + b * 0.3 + c * 0.5 + 0.5));
    
    //解法2
    printf("%d", a * 2 / 10 + b * 3 / 10 + c * 5 / 10 );
    return 0;
}
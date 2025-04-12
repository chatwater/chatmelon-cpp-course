#include <cstdio>
// using namespace std;
// 数字直角三角形
// 多重循环的应用
int main() {
    int cnt = 0, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i+1; j++) {
            printf("%02d ", ++cnt);
        }
        printf("\n");
    }
    return 0;
}
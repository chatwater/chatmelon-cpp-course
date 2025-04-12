#include <iostream>
#include <cstdio>
#include <cstring>
#define MAXN 55
using namespace std;
// 地毯
// 二维数组的应用
int main() {
    int n, m, a[MAXN][MAXN];
    memset(a, 0, sizeof(a)); // 初始化二维数组
    cin >> n >> m; // 输入地毯的大小
    for (int i = 1; i <= m; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2; // 输入每块地毯的坐标
        for (int j = x1; j <= x2; j++) {
            for (int k = y1; k <= y2; k++) {
                a[j][k] = 1; // 标记地毯覆盖的区域
            }
        }  
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << (j == n ? '\n' : ' '); // 输出地毯覆盖的区域
        }
        cout << endl;
    }
    return 0;
}
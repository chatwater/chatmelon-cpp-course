#include <iostream>
#include <cstdio>
using namespace std;
// 工艺品制作
// 三维数组的应用
int main() {
    int v[22][22][22], w, x, h, q, x1, x2, y1, y2, z1, z2, ans;
    cin >> w >> x >> h >> q; // 输入工艺品的大小和切割的次数
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= h; k++) {
                v[i][j][k] = 1; // 初始化工艺品为1
            }
        }
    }
    while (q--) {
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2; // 输入切割的坐标
        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                for (int k = z1; k <= z2; k++) {
                    v[i][j][k] = 0; // 标记切割的区域为0
                }
            }
        }
    }
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= h; k++) {
                ans += v[i][j][k]; // 统计未切割的区域
            }
        }
    }
    cout << ans << endl; // 输出未切割的区域的数量
    return 0;
}
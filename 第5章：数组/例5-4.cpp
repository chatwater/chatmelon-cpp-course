#include <iostream>
using namespace std;
// 校门外的树
// 一维数组的应用
int main() {
    int l, m, tree[10010] = {0}, a, b, s = 0;
    cin >> l >> m; // 输入马路长度和砍树区域的数量
    for (int i = 0; i < m; i++) {
        cin >> a >> b; // 输入第i次砍树的范围
        for (int j = a; j <= b; j++) {
            tree[j] = 1; // 标记被砍的树
        }
    }
    for (int i = 0; i <= l; i++) {
        if (tree[i] == 0) { // 如果树没有被砍
            s++; // 统计树的数量
        }
    }
    cout << s << endl; // 输出树的数量
    return 0;
}
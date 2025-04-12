#include <iostream>
using namespace std;
// 逻辑运算符 && || ^ !，与、或、异或、非
// 逻辑表达式（包含逻辑运算符的式子）
int main() {
    int x; bool p1, p2;
    cin >> x;
    p1 = x % 2 == 0; // x是偶数
    p2 = 4<x && x<=12; // 4<x<=12
    cout<< p1 << p2 << endl;// 1表示成立，0表示不成立
    cout<< (p1 && p2) << ' '; // 两个性质同时成立
    cout<< (p1 || p2) << ' '; // 至少一个性质成立
    cout<< (p1 ^ p2) << ' '; // 只有一个性质成立
    cout<< (!p1 && !p2) << ' '; // 两个性质都不成立,写法1
    cout<< !(p1 || p2) << ' '; // 两个性质都不成立，写法2
    return 0;
}
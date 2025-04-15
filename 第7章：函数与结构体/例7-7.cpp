#include <iostream>
using namespace std;
// 【题目】计算阶乘：求n!(n<=12), 1*2*3*...*n
// 知识点：递归函数
int f(int x) {
    if (x == 1) return 1; //递归终止条件
    else return x * f(x - 1); //
}
int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
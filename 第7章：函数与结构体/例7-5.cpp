#include <iostream>
using namespace std;
// 【题目】交换两个变量的值
// 知识点：变量作用域和参数传递
void swap(int &x, int &y) { //int x, int y 是错误写法
    int t = x;
    x = y;
    y = t;
}
int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
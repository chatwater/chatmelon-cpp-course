#include <iostream>
using namespace std;
// 逻辑运算符 > <= != ==
// 关系表达式(包含逻辑运算符的式子) a>b a<=b a!=b a==b
int main() {
    int a, b;
    cin >> a >> b;
    //0 假，1 真
    cout << (a > b) << ' '; 
    cout << (a <= b) << ' '; 
    cout << (a == b) << ' '; 
    cout << (a != b) << endl;
    return 0;
}
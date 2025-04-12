#include <iostream>
using namespace std;
//数字反转
//输入格式：abc.d
//输出格式：d.abc
int main() {
    char a, b, c, dot, d;
    cin >> a >> b >> c >> dot >> d;
    cout << d << dot << c << b << a << endl; //输出转换后的字符
    return 0;
}

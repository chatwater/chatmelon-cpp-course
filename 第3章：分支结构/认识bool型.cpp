#include <iostream>
using namespace std;

int main() {
    // 布尔类型的变量
    // bool 是布尔类型的关键字，表示布尔值
    // 布尔类型的变量只能取两个值：true 和 false
    // true 表示真，false 表示假
    bool a = true;
    bool b = false;

    // 默认输出 1 和 0
    // 在 C++ 中，布尔值 true 和 false 分别对应整数 1 和 0
    // 当输出布尔值时，默认情况下会输出 1 和 0
    cout << "默认输出：" << endl;
    cout << "a = " << a << endl; // 输出 1
    cout << "b = " << b << endl; // 输出 0

    // 如果要输出 true 和 false，可以使用 std::boolalpha
    // std::boolalpha 是一个流操纵符，用于控制布尔值的输出格式
    // 使用 std::boolalpha 后，布尔值会以 true 和 false 的形式输出
    cout << "使用 std::boolalpha：" << endl;
    cout << "a = " << boolalpha << a << endl; // 输出 true
    cout << "b = " << boolalpha << b << endl; // 输出 false

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main() {
    short a_s = 127; //short类型是2字节，范围是-32768~32767
    int a = 123456; //int类型是4字节，范围是-2147483648~2147483647
    long a_l = 1234567891011; //long类型是4字节，范围是-2147483648~2147483647
    char b = '*'; //char类型是1字节，范围是-128~127
    float c = 23.456; //float类型是4字节，范围是-3.4E+38~3.4E+38
    double d = 1234.56789; //double类型是8字节，范围是-1.7E+308~1.7E+308
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //数组类型
    string str = "Hello World!"; //字符串类型
    cout << "short类型：" << a_s << endl << &a_s << endl << endl;
    cout << "int类型：" << a << endl << &a << endl << endl;
    cout << "long类型：" << a_l << endl << &a_l << endl << endl;
    cout << "char类型：" << b << endl << &b << endl << endl;
    cout << "char类型(修改后)：" << b << endl << static_cast<void*>(&b) << endl << endl;
    cout << "float类型：" << c << endl << &c << endl << endl;
    cout << "double类型：" << d << endl << &d << endl << endl;
    // cout << "数组[0]类型：" << arr[0] << endl << &arr[0] << endl << endl;
    cout << "数组类型：" << arr << endl << &arr << endl << endl;
    // cout << "字符串[0]类型：" << str[0] << endl << &(str[0]) << endl << endl;
    // cout << "字符串[0]类型(修改后)：" << str[0] << endl << static_cast<void*>(&(str[0])) << endl << endl;
    cout << "字符串类型：" << str << endl << &str << endl << endl;
    return 0;
}
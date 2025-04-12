#include <iostream>
using namespace std;
//数字反转-任意字符串的反转
//输入格式：任意字符串
//输出格式：任意字符串
int main() {
    string str;
    cin >> str; //输入任意字符串
    //注意：C++11引入了std::string的rbegin()和rend()方法，可以直接反转字符串
    string reversed_str = string(str.rbegin(), str.rend()); //反转字符串
    cout << reversed_str << endl; //输出反转后的字符串
    return 0;
}
#include <iostream>
#include <typeinfo>
// using namespace std;
//扩展阅读。认识cout：cout 是一个输出流对象。cin的性质同cout
int main() {
    // 输出 cout 的地址: cout前面加上&符号，表示取cout的地址
    std::cout << "cout的地址： " << &std::cout << std::endl;
    // 输出 cout 的类型
    std::cout << "cout 的类型： " << typeid(std::cout).name() << std::endl;
    return 0;
}

/**
 * cout 是一个输出流对象，属于 ostream 类的实例
 * cout 的地址是一个指针，指向 cout 对象在内存中的位置
 * cout 的类型是 ostream，表示它是一个输出流对象
 * << 是一个运算符（位运算符），用于将数据输出到 cout 对象
 * endl 是一个操纵符，用于输出换行符并刷新输出缓冲区
 * 
 * 再扩展：
 * typeid 是一个运算符，用于获取对象的类型信息
 * name() 是 type_info 类的成员函数，用于获取类型的名称
 * 这里的 typeid(cout).name() 返回的是一个字符串，表示 cout 对象的类型
 * 这个字符串的具体内容可能会因编译器而异，但通常是 "std::ostream" 或类似的名称
 */
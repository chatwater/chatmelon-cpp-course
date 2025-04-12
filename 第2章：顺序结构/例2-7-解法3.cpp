//#include <iostream> //包含头文件iostream，是C++的标准输入输出库
#include <cstdio> //包含头文件cstdio，是C语言的标准输入输出库
// using namespace std; //没有使用到C++语言的特性，这条语句不加也没什么问题
//数字反转
//输入格式：abc.d
//输出格式：d.abc
int main() {
    char a, b, c, d;
    //输入格式：abc.d
    //输出格式：d.abc
    //注意：scanf和printf在cstdio中定义，是C语言的标准输入输出函数，相当于C++的cin和cout
    //%c用于读取“一个char类型的字符”,在P24中有说明

    //相当于C++中的cin>>a>>b>>c>>d; cin是对象， scanf()是一个函数。scan翻译"扫描"
    scanf("%c%c%c.%c", &a, &b, &c, &d); //形状形如 abc.d <--->"%c%c%c.%c"
    
    //相当于C++中的cout<<d<<c<<b<<a<<endl; cout是对象，printf()是一个函数。print翻译"打印"
    printf("%c.%c%c%c\n", d, c, b, a); //输出转换后的字符,\n是换行符
    return 0;
}

/**
 * C与C++的关系：
 * C++是C语言的扩展，C++兼容C语言，C语言是C++的基础
 * C++中可以使用C语言的语法，但C语言中不能使用C++的语法
 * 
 */
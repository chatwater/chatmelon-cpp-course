#include <iostream>
using namespace std;
// 字符数组和string的相互转化
// 字符数组是C语言中的字符串表示方式，string是C++标准库中的字符串表示方式

// 将string转换为字符数组
void test1() { 
    // 作者的大多数变量命名都不规范，这里的arr是单词array的缩写，比较规范，学习一下。
    // 扩展知识，变量命名规范：变量名要有意义，尽量使用英文单词，变量名要简短，尽量使用小写字母，变量名之间用下划线连接。不要使用a、b、c、d等无意义的变量名。
    // 初学者可以使用a、b、c等变量名，到现在建议遵循标准命名规范。
    char arr[11]; //注意长度至少为字符串长度+1，因为要存放字符串结束符'\0'。字符串helloworld长度为10，所以这里长度为11
    string s = "helloworld";
    int len = s.copy(arr, 10); // copy函数将字符串复制到字符数组中
    arr[len] = '\0'; // 手动添加字符串结束符
    cout << arr << endl;
}

// 将string转换为字符数组
void test2() {
    char arr[11]; //同上，至少11
    string s = "helloworld";
    strcpy(arr, s.c_str()); // c_str函数将string转换为字符数组
    cout << arr << endl;
}

// 将字符数组转换为string
void test3() {
    char arr[11]; //同上，至少11
    strcpy(arr, "helloworld"); // strcpy函数将字符数组复制到string中
    string s = arr; // 直接赋值
    cout << s << endl;
}
int main() {
    //主函数分别调用test1、test2、test3函数
    test1();
    test2();
    test3();
    return 0;
}
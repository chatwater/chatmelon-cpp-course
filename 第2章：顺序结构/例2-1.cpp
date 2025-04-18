#include <iostream>
using namespace std;
//跑步
int main() {
    int v_a = 5, v_yao = 8, distance = 100; 
    double delta, ans; 
    delta = v_yao - v_a; 
    ans = distance / delta; 
    cout << ans << endl << &ans << endl; // &ans的值是ans存在计算机上的地址
    return 0;
}
/*
数据类型
数据类型是指计算机中存储数据的类型。数据类型决定了数据的存储方式、大小和可操作性。

之前学习了：
int 整型
short 短整型
long 长整型

继续学习：P16
unsigned int 无符号整型 (unsigned 翻译为“无符号的”)
long long 长长整型
unsigned long long 无符号长长整型

char 字符型 P17那些字符，char可以存一个字符，也可以存一个整数（-128到127之间的整数）
float 单精度浮点型 有效数字大约是 6~7 位的小数  形如3.123456, 3123.456
double 双精度浮点型 有效数字大约是 15~16 位的小数  形如3.123456789012345, 3123.456789012345
bool 布尔型 只有两个值：true 和 false
string 字符串型 可以存储一个字符串，字符串是由字符组成的序列
例子：
float weight = 60.00; //体重，没有单位
double height = 1.75; //身高，没有单位

unsigned int xm_score //变量的声明
unsigned int xm_score = 0; //变量的声明，并定义它的初始值为0
xm_score = 100; //变量的赋值
xm_score = 80; //变量的赋值
*/



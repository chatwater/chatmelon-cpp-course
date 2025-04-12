#include <iostream>
using namespace std;

/*
1、如果函数在main函数之前定义，则可以省略函数声明。
2、如果函数在main函数之后定义，则需要在main函数之前声明函数。
*/ 
int sum(); //sum函数的“声明”

// int a, b; //全局变量

int main() {
    int ans; //变量ans的声明
    // ans = 5;//变量ans的赋值
    ans = sum(); // 调用sum函数
    cout << "总和为: " << ans << endl; // 调用sum函数并输出结果
    return 0;
}

// sum函数的“定义”
int sum() {
    int num1, num2; //num是 number的简写，number是数字的意思
    cout << "请输入两个整数：" << endl;
    cin >> num1 >> num2;
    int res = num1 + num2; // 调用sum函数，result翻译 结果
    return res; // 返回两个数的和
}

/**
 * 文件的后缀名
 * .cpp：C++源文件 c plus plus
 * 
 */
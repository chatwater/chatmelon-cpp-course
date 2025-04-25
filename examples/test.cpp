#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// 这是一个简单的函数，用于测试函数调用
int add(int a, int b) {
    return a + b;
}

// 测试类
class Calculator {
private:
    std::string name;
public:
    Calculator(const std::string& n) : name(n) {}
    
    int multiply(int a, int b) const {
        return a * b;
    }
    
    std::string getName() const {
        return name;
    }
};

int main() {
    // 测试基本输出
    std::cout << "===== C++环境测试程序 =====" << std::endl;
    
    // 测试变量和基本数据类型
    int num1 = 10;
    int num2 = 5;
    double pi = 3.14159;
    std::string greeting = "你好，C++";
    
    std::cout << "变量测试: " << greeting << std::endl;
    std::cout << "整数相加: " << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
    std::cout << "π值: " << pi << std::endl;
    
    // 测试数学函数
    std::cout << "平方根计算: √" << num1 << " = " << sqrt(num1) << std::endl;
    
    // 测试向量容器
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "向量元素: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // 测试类
    Calculator calc("我的计算器");
    std::cout << "类实例名称: " << calc.getName() << std::endl;
    std::cout << "类方法调用: " << num1 << " * " << num2 << " = " << calc.multiply(num1, num2) << std::endl;
    
    // 测试条件语句
    if (num1 > num2) {
        std::cout << num1 << " 大于 " << num2 << std::endl;
    } else {
        std::cout << num1 << " 不大于 " << num2 << std::endl;
    }
    
    std::cout << "===== 测试完成 =====" << std::endl;
    return 0;
} 
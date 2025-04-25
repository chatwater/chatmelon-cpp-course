#include <iostream>

// 假设你和同学都写了一个同名函数printMessage，用命名空间区分
namespace XiaoMing { // 小明的命名空间
    void printMessage() {
        std::cout << "我是小明写的函数！" << std::endl;
    }
}

namespace XiaoHong { // 小红的命名空间
    void printMessage() {
        std::cout << "我是小红写的函数！" << std::endl;
    }
}

int main() {
    // 通过命名空间调用不同函数
    XiaoMing::printMessage(); // 调用小明的版本
    XiaoHong::printMessage(); // 调用小红的版本

    // 也可以用 using 简化
    using namespace XiaoMing;
    printMessage(); // 这里默认用小明版本

    return 0;
}
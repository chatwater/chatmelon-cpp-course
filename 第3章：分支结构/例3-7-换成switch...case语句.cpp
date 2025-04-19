#include <iostream>
using namespace std;

int main() {
    double m, h, BMI;
    cin >> m >> h;
    BMI = m / (h * h); // 计算BMI

    // 将 BMI 分类为整数值
    int category;
    if (BMI < 18.5) {
        category = 1; // 偏瘦
    } else if (BMI < 24) {
        category = 2; // 正常
    } else if (BMI < 28) {
        category = 3; // 偏胖
    } else if (BMI < 32) {
        category = 4; // 肥胖
    } else {
        category = 5; // 重度肥胖
    }

    // 使用 switch...case 输出结果
    switch (category) {
        case 1:
            cout << "偏瘦" << endl;
            break;
        case 2:
            cout << "正常" << endl;
            break;
        case 3:
            cout << "偏胖" << endl;
            break;
        case 4:
            cout << "肥胖" << endl;
            break;
        case 5:
            cout << "重度肥胖" << endl;
            break;
        default:
            cout << "未知分类" << endl;
            break;
    }

    cout << "BMI = " << BMI << endl;
    return 0;
}